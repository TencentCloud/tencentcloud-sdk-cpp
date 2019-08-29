/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATACPM_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATACPM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/CpmVirtualPrivateCloud.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 黑石计算环境数据
                */
                class EnvDataCpm : public AbstractModel
                {
                public:
                    EnvDataCpm();
                    ~EnvDataCpm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑石可用区列表。可通过黑石[DescribeRegions](https://cloud.tencent.com/document/api/386/33564)接口查询。目前仅支持一个可用区。
                     * @return Zones 黑石可用区列表。可通过黑石[DescribeRegions](https://cloud.tencent.com/document/api/386/33564)接口查询。目前仅支持一个可用区。
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置黑石可用区列表。可通过黑石[DescribeRegions](https://cloud.tencent.com/document/api/386/33564)接口查询。目前仅支持一个可用区。
                     * @param Zones 黑石可用区列表。可通过黑石[DescribeRegions](https://cloud.tencent.com/document/api/386/33564)接口查询。目前仅支持一个可用区。
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取黑石计算单元类型列表。如v3.c2.medium，更详细的ComputeType参考[黑石竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)。目前仅支持一个计算单元类型。
                     * @return ComputeTypes 黑石计算单元类型列表。如v3.c2.medium，更详细的ComputeType参考[黑石竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)。目前仅支持一个计算单元类型。
                     */
                    std::vector<std::string> GetComputeTypes() const;

                    /**
                     * 设置黑石计算单元类型列表。如v3.c2.medium，更详细的ComputeType参考[黑石竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)。目前仅支持一个计算单元类型。
                     * @param ComputeTypes 黑石计算单元类型列表。如v3.c2.medium，更详细的ComputeType参考[黑石竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)。目前仅支持一个计算单元类型。
                     */
                    void SetComputeTypes(const std::vector<std::string>& _computeTypes);

                    /**
                     * 判断参数 ComputeTypes 是否已赋值
                     * @return ComputeTypes 是否已赋值
                     */
                    bool ComputeTypesHasBeenSet() const;

                    /**
                     * 获取黑石操作系统类型ID。
                     * @return OsTypeId 黑石操作系统类型ID。
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置黑石操作系统类型ID。
                     * @param OsTypeId 黑石操作系统类型ID。
                     */
                    void SetOsTypeId(const uint64_t& _osTypeId);

                    /**
                     * 判断参数 OsTypeId 是否已赋值
                     * @return OsTypeId 是否已赋值
                     */
                    bool OsTypeIdHasBeenSet() const;

                    /**
                     * 获取黑石VPC列表，目前仅支持一个VPC。
                     * @return VirtualPrivateClouds 黑石VPC列表，目前仅支持一个VPC。
                     */
                    std::vector<CpmVirtualPrivateCloud> GetVirtualPrivateClouds() const;

                    /**
                     * 设置黑石VPC列表，目前仅支持一个VPC。
                     * @param VirtualPrivateClouds 黑石VPC列表，目前仅支持一个VPC。
                     */
                    void SetVirtualPrivateClouds(const std::vector<CpmVirtualPrivateCloud>& _virtualPrivateClouds);

                    /**
                     * 判断参数 VirtualPrivateClouds 是否已赋值
                     * @return VirtualPrivateClouds 是否已赋值
                     */
                    bool VirtualPrivateCloudsHasBeenSet() const;

                    /**
                     * 获取DeployType参数值为fast时，将选取黑石预部署机器发货，发货快。如果无此参数，则选取黑石常规机器发货。
                     * @return DeployType DeployType参数值为fast时，将选取黑石预部署机器发货，发货快。如果无此参数，则选取黑石常规机器发货。
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置DeployType参数值为fast时，将选取黑石预部署机器发货，发货快。如果无此参数，则选取黑石常规机器发货。
                     * @param DeployType DeployType参数值为fast时，将选取黑石预部署机器发货，发货快。如果无此参数，则选取黑石常规机器发货。
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取出价策略。默认取值为SpotAsPriceGo，表示出价方式为随市场价的策略。目前只可取值SpotAsPriceGo。
                     * @return SpotStrategy 出价策略。默认取值为SpotAsPriceGo，表示出价方式为随市场价的策略。目前只可取值SpotAsPriceGo。
                     */
                    std::string GetSpotStrategy() const;

                    /**
                     * 设置出价策略。默认取值为SpotAsPriceGo，表示出价方式为随市场价的策略。目前只可取值SpotAsPriceGo。
                     * @param SpotStrategy 出价策略。默认取值为SpotAsPriceGo，表示出价方式为随市场价的策略。目前只可取值SpotAsPriceGo。
                     */
                    void SetSpotStrategy(const std::string& _spotStrategy);

                    /**
                     * 判断参数 SpotStrategy 是否已赋值
                     * @return SpotStrategy 是否已赋值
                     */
                    bool SpotStrategyHasBeenSet() const;

                    /**
                     * 获取设置黑石竞价实例密码。若不指定会生成随机密码，可到站内信中查看。
                     * @return Passwd 设置黑石竞价实例密码。若不指定会生成随机密码，可到站内信中查看。
                     */
                    std::string GetPasswd() const;

                    /**
                     * 设置设置黑石竞价实例密码。若不指定会生成随机密码，可到站内信中查看。
                     * @param Passwd 设置黑石竞价实例密码。若不指定会生成随机密码，可到站内信中查看。
                     */
                    void SetPasswd(const std::string& _passwd);

                    /**
                     * 判断参数 Passwd 是否已赋值
                     * @return Passwd 是否已赋值
                     */
                    bool PasswdHasBeenSet() const;

                private:

                    /**
                     * 黑石可用区列表。可通过黑石[DescribeRegions](https://cloud.tencent.com/document/api/386/33564)接口查询。目前仅支持一个可用区。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 黑石计算单元类型列表。如v3.c2.medium，更详细的ComputeType参考[黑石竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)。目前仅支持一个计算单元类型。
                     */
                    std::vector<std::string> m_computeTypes;
                    bool m_computeTypesHasBeenSet;

                    /**
                     * 黑石操作系统类型ID。
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * 黑石VPC列表，目前仅支持一个VPC。
                     */
                    std::vector<CpmVirtualPrivateCloud> m_virtualPrivateClouds;
                    bool m_virtualPrivateCloudsHasBeenSet;

                    /**
                     * DeployType参数值为fast时，将选取黑石预部署机器发货，发货快。如果无此参数，则选取黑石常规机器发货。
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * 出价策略。默认取值为SpotAsPriceGo，表示出价方式为随市场价的策略。目前只可取值SpotAsPriceGo。
                     */
                    std::string m_spotStrategy;
                    bool m_spotStrategyHasBeenSet;

                    /**
                     * 设置黑石竞价实例密码。若不指定会生成随机密码，可到站内信中查看。
                     */
                    std::string m_passwd;
                    bool m_passwdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATACPM_H_
