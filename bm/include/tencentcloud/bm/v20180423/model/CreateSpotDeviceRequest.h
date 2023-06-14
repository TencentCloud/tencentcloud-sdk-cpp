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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CREATESPOTDEVICEREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CREATESPOTDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * CreateSpotDevice请求参数结构体
                */
                class CreateSpotDeviceRequest : public AbstractModel
                {
                public:
                    CreateSpotDeviceRequest();
                    ~CreateSpotDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区名称。如ap-guangzhou-bls-1, 通过DescribeRegions获取
                     * @return Zone 可用区名称。如ap-guangzhou-bls-1, 通过DescribeRegions获取
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称。如ap-guangzhou-bls-1, 通过DescribeRegions获取
                     * @param _zone 可用区名称。如ap-guangzhou-bls-1, 通过DescribeRegions获取
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取计算单元类型, 如v3.c2.medium，更详细的ComputeType参考[竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)
                     * @return ComputeType 计算单元类型, 如v3.c2.medium，更详细的ComputeType参考[竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)
                     * 
                     */
                    std::string GetComputeType() const;

                    /**
                     * 设置计算单元类型, 如v3.c2.medium，更详细的ComputeType参考[竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)
                     * @param _computeType 计算单元类型, 如v3.c2.medium，更详细的ComputeType参考[竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)
                     * 
                     */
                    void SetComputeType(const std::string& _computeType);

                    /**
                     * 判断参数 ComputeType 是否已赋值
                     * @return ComputeType 是否已赋值
                     * 
                     */
                    bool ComputeTypeHasBeenSet() const;

                    /**
                     * 获取操作系统类型ID
                     * @return OsTypeId 操作系统类型ID
                     * 
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置操作系统类型ID
                     * @param _osTypeId 操作系统类型ID
                     * 
                     */
                    void SetOsTypeId(const uint64_t& _osTypeId);

                    /**
                     * 判断参数 OsTypeId 是否已赋值
                     * @return OsTypeId 是否已赋值
                     * 
                     */
                    bool OsTypeIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取购买的计算单元个数
                     * @return GoodsNum 购买的计算单元个数
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置购买的计算单元个数
                     * @param _goodsNum 购买的计算单元个数
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取出价策略。可取值为SpotWithPriceLimit和SpotAsPriceGo。SpotWithPriceLimit，用户设置价格上限，需要传SpotPriceLimit参数， 如果市场价高于用户的指定价格，则购买不成功;  SpotAsPriceGo 是随市场价的策略。
                     * @return SpotStrategy 出价策略。可取值为SpotWithPriceLimit和SpotAsPriceGo。SpotWithPriceLimit，用户设置价格上限，需要传SpotPriceLimit参数， 如果市场价高于用户的指定价格，则购买不成功;  SpotAsPriceGo 是随市场价的策略。
                     * 
                     */
                    std::string GetSpotStrategy() const;

                    /**
                     * 设置出价策略。可取值为SpotWithPriceLimit和SpotAsPriceGo。SpotWithPriceLimit，用户设置价格上限，需要传SpotPriceLimit参数， 如果市场价高于用户的指定价格，则购买不成功;  SpotAsPriceGo 是随市场价的策略。
                     * @param _spotStrategy 出价策略。可取值为SpotWithPriceLimit和SpotAsPriceGo。SpotWithPriceLimit，用户设置价格上限，需要传SpotPriceLimit参数， 如果市场价高于用户的指定价格，则购买不成功;  SpotAsPriceGo 是随市场价的策略。
                     * 
                     */
                    void SetSpotStrategy(const std::string& _spotStrategy);

                    /**
                     * 判断参数 SpotStrategy 是否已赋值
                     * @return SpotStrategy 是否已赋值
                     * 
                     */
                    bool SpotStrategyHasBeenSet() const;

                    /**
                     * 获取用户设置的价格。当为SpotWithPriceLimit竞价策略时有效
                     * @return SpotPriceLimit 用户设置的价格。当为SpotWithPriceLimit竞价策略时有效
                     * 
                     */
                    double GetSpotPriceLimit() const;

                    /**
                     * 设置用户设置的价格。当为SpotWithPriceLimit竞价策略时有效
                     * @param _spotPriceLimit 用户设置的价格。当为SpotWithPriceLimit竞价策略时有效
                     * 
                     */
                    void SetSpotPriceLimit(const double& _spotPriceLimit);

                    /**
                     * 判断参数 SpotPriceLimit 是否已赋值
                     * @return SpotPriceLimit 是否已赋值
                     * 
                     */
                    bool SpotPriceLimitHasBeenSet() const;

                    /**
                     * 获取设置竞价实例密码。可选参数，没有指定会生成随机密码
                     * @return Passwd 设置竞价实例密码。可选参数，没有指定会生成随机密码
                     * 
                     */
                    std::string GetPasswd() const;

                    /**
                     * 设置设置竞价实例密码。可选参数，没有指定会生成随机密码
                     * @param _passwd 设置竞价实例密码。可选参数，没有指定会生成随机密码
                     * 
                     */
                    void SetPasswd(const std::string& _passwd);

                    /**
                     * 判断参数 Passwd 是否已赋值
                     * @return Passwd 是否已赋值
                     * 
                     */
                    bool PasswdHasBeenSet() const;

                private:

                    /**
                     * 可用区名称。如ap-guangzhou-bls-1, 通过DescribeRegions获取
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 计算单元类型, 如v3.c2.medium，更详细的ComputeType参考[竞价实例产品文档](https://cloud.tencent.com/document/product/386/30256)
                     */
                    std::string m_computeType;
                    bool m_computeTypeHasBeenSet;

                    /**
                     * 操作系统类型ID
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 购买的计算单元个数
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 出价策略。可取值为SpotWithPriceLimit和SpotAsPriceGo。SpotWithPriceLimit，用户设置价格上限，需要传SpotPriceLimit参数， 如果市场价高于用户的指定价格，则购买不成功;  SpotAsPriceGo 是随市场价的策略。
                     */
                    std::string m_spotStrategy;
                    bool m_spotStrategyHasBeenSet;

                    /**
                     * 用户设置的价格。当为SpotWithPriceLimit竞价策略时有效
                     */
                    double m_spotPriceLimit;
                    bool m_spotPriceLimitHasBeenSet;

                    /**
                     * 设置竞价实例密码。可选参数，没有指定会生成随机密码
                     */
                    std::string m_passwd;
                    bool m_passwdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CREATESPOTDEVICEREQUEST_H_
