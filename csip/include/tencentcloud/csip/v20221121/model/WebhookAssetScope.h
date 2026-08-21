/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 通知资产范围
                */
                class WebhookAssetScope : public AbstractModel
                {
                public:
                    WebhookAssetScope();
                    ~WebhookAssetScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产范围类型（对齐 NotifyAssetRange）
枚举值：
1：全部主机（可剔除）
2：自选主机
3：按标签选择
                     * @return AssetRange 资产范围类型（对齐 NotifyAssetRange）
枚举值：
1：全部主机（可剔除）
2：自选主机
3：按标签选择
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置资产范围类型（对齐 NotifyAssetRange）
枚举值：
1：全部主机（可剔除）
2：自选主机
3：按标签选择
                     * @param _assetRange 资产范围类型（对齐 NotifyAssetRange）
枚举值：
1：全部主机（可剔除）
2：自选主机
3：按标签选择
                     * 
                     */
                    void SetAssetRange(const int64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取选中的主机 quuid 列表，仅 AssetRange=2 生效
                     * @return InstanceIds 选中的主机 quuid 列表，仅 AssetRange=2 生效
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置选中的主机 quuid 列表，仅 AssetRange=2 生效
                     * @param _instanceIds 选中的主机 quuid 列表，仅 AssetRange=2 生效
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取排除的主机 quuid 列表，仅 AssetRange=1 生效
                     * @return ExcludedInstanceIds 排除的主机 quuid 列表，仅 AssetRange=1 生效
                     * 
                     */
                    std::vector<std::string> GetExcludedInstanceIds() const;

                    /**
                     * 设置排除的主机 quuid 列表，仅 AssetRange=1 生效
                     * @param _excludedInstanceIds 排除的主机 quuid 列表，仅 AssetRange=1 生效
                     * 
                     */
                    void SetExcludedInstanceIds(const std::vector<std::string>& _excludedInstanceIds);

                    /**
                     * 判断参数 ExcludedInstanceIds 是否已赋值
                     * @return ExcludedInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取安全中心标签 ID 列表，仅 AssetRange=3 生效
                     * @return TagIds 安全中心标签 ID 列表，仅 AssetRange=3 生效
                     * 
                     */
                    std::vector<int64_t> GetTagIds() const;

                    /**
                     * 设置安全中心标签 ID 列表，仅 AssetRange=3 生效
                     * @param _tagIds 安全中心标签 ID 列表，仅 AssetRange=3 生效
                     * 
                     */
                    void SetTagIds(const std::vector<int64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取腾讯云标签列表，仅 AssetRange=3 生效
入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空
                     * @return CloudTags 腾讯云标签列表，仅 AssetRange=3 生效
入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空
                     * 
                     */
                    std::vector<std::string> GetCloudTags() const;

                    /**
                     * 设置腾讯云标签列表，仅 AssetRange=3 生效
入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空
                     * @param _cloudTags 腾讯云标签列表，仅 AssetRange=3 生效
入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空
                     * 
                     */
                    void SetCloudTags(const std::vector<std::string>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                private:

                    /**
                     * 资产范围类型（对齐 NotifyAssetRange）
枚举值：
1：全部主机（可剔除）
2：自选主机
3：按标签选择
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * 选中的主机 quuid 列表，仅 AssetRange=2 生效
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 排除的主机 quuid 列表，仅 AssetRange=1 生效
                     */
                    std::vector<std::string> m_excludedInstanceIds;
                    bool m_excludedInstanceIdsHasBeenSet;

                    /**
                     * 安全中心标签 ID 列表，仅 AssetRange=3 生效
                     */
                    std::vector<int64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * 腾讯云标签列表，仅 AssetRange=3 生效
入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空
                     */
                    std::vector<std::string> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_
