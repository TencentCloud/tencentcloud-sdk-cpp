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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERTYPE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 专用集群配置
                */
                class DedicatedClusterType : public AbstractModel
                {
                public:
                    DedicatedClusterType();
                    ~DedicatedClusterType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置id
                     * @return DedicatedClusterTypeId 配置id
                     * 
                     */
                    std::string GetDedicatedClusterTypeId() const;

                    /**
                     * 设置配置id
                     * @param _dedicatedClusterTypeId 配置id
                     * 
                     */
                    void SetDedicatedClusterTypeId(const std::string& _dedicatedClusterTypeId);

                    /**
                     * 判断参数 DedicatedClusterTypeId 是否已赋值
                     * @return DedicatedClusterTypeId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdHasBeenSet() const;

                    /**
                     * 获取配置描述，对应描述
                     * @return Description 配置描述，对应描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置配置描述，对应描述
                     * @param _description 配置描述，对应描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取配置名称，对应计算资源类型
                     * @return Name 配置名称，对应计算资源类型
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名称，对应计算资源类型
                     * @param _name 配置名称，对应计算资源类型
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取创建配置的时间
                     * @return CreateTime 创建配置的时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建配置的时间
                     * @param _createTime 创建配置的时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取支持的存储类型列表
                     * @return SupportedStorageType 支持的存储类型列表
                     * 
                     */
                    std::vector<std::string> GetSupportedStorageType() const;

                    /**
                     * 设置支持的存储类型列表
                     * @param _supportedStorageType 支持的存储类型列表
                     * 
                     */
                    void SetSupportedStorageType(const std::vector<std::string>& _supportedStorageType);

                    /**
                     * 判断参数 SupportedStorageType 是否已赋值
                     * @return SupportedStorageType 是否已赋值
                     * 
                     */
                    bool SupportedStorageTypeHasBeenSet() const;

                    /**
                     * 获取支持的上连交换机的链路传输速率
                     * @return SupportedUplinkGiB 支持的上连交换机的链路传输速率
                     * 
                     */
                    std::vector<int64_t> GetSupportedUplinkGiB() const;

                    /**
                     * 设置支持的上连交换机的链路传输速率
                     * @param _supportedUplinkGiB 支持的上连交换机的链路传输速率
                     * 
                     */
                    void SetSupportedUplinkGiB(const std::vector<int64_t>& _supportedUplinkGiB);

                    /**
                     * 判断参数 SupportedUplinkGiB 是否已赋值
                     * @return SupportedUplinkGiB 是否已赋值
                     * 
                     */
                    bool SupportedUplinkGiBHasBeenSet() const;

                    /**
                     * 获取支持的实例族列表
                     * @return SupportedInstanceFamily 支持的实例族列表
                     * 
                     */
                    std::vector<std::string> GetSupportedInstanceFamily() const;

                    /**
                     * 设置支持的实例族列表
                     * @param _supportedInstanceFamily 支持的实例族列表
                     * 
                     */
                    void SetSupportedInstanceFamily(const std::vector<std::string>& _supportedInstanceFamily);

                    /**
                     * 判断参数 SupportedInstanceFamily 是否已赋值
                     * @return SupportedInstanceFamily 是否已赋值
                     * 
                     */
                    bool SupportedInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取地板承重要求(KG)
                     * @return Weight 地板承重要求(KG)
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置地板承重要求(KG)
                     * @param _weight 地板承重要求(KG)
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取功率要求(KW)
                     * @return PowerDrawKva 功率要求(KW)
                     * 
                     */
                    double GetPowerDrawKva() const;

                    /**
                     * 设置功率要求(KW)
                     * @param _powerDrawKva 功率要求(KW)
                     * 
                     */
                    void SetPowerDrawKva(const double& _powerDrawKva);

                    /**
                     * 判断参数 PowerDrawKva 是否已赋值
                     * @return PowerDrawKva 是否已赋值
                     * 
                     */
                    bool PowerDrawKvaHasBeenSet() const;

                    /**
                     * 获取显示计算资源规格详情，存储等资源不显示
                     * @return ComputeFormatDesc 显示计算资源规格详情，存储等资源不显示
                     * 
                     */
                    std::string GetComputeFormatDesc() const;

                    /**
                     * 设置显示计算资源规格详情，存储等资源不显示
                     * @param _computeFormatDesc 显示计算资源规格详情，存储等资源不显示
                     * 
                     */
                    void SetComputeFormatDesc(const std::string& _computeFormatDesc);

                    /**
                     * 判断参数 ComputeFormatDesc 是否已赋值
                     * @return ComputeFormatDesc 是否已赋值
                     * 
                     */
                    bool ComputeFormatDescHasBeenSet() const;

                private:

                    /**
                     * 配置id
                     */
                    std::string m_dedicatedClusterTypeId;
                    bool m_dedicatedClusterTypeIdHasBeenSet;

                    /**
                     * 配置描述，对应描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 配置名称，对应计算资源类型
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建配置的时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 支持的存储类型列表
                     */
                    std::vector<std::string> m_supportedStorageType;
                    bool m_supportedStorageTypeHasBeenSet;

                    /**
                     * 支持的上连交换机的链路传输速率
                     */
                    std::vector<int64_t> m_supportedUplinkGiB;
                    bool m_supportedUplinkGiBHasBeenSet;

                    /**
                     * 支持的实例族列表
                     */
                    std::vector<std::string> m_supportedInstanceFamily;
                    bool m_supportedInstanceFamilyHasBeenSet;

                    /**
                     * 地板承重要求(KG)
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 功率要求(KW)
                     */
                    double m_powerDrawKva;
                    bool m_powerDrawKvaHasBeenSet;

                    /**
                     * 显示计算资源规格详情，存储等资源不显示
                     */
                    std::string m_computeFormatDesc;
                    bool m_computeFormatDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERTYPE_H_
