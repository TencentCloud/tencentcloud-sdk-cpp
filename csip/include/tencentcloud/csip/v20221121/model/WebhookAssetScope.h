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
                     * 获取<p>资产范围类型（对齐 NotifyAssetRange）<br>枚举值：<br>1：全部主机（可剔除）<br>2：自选主机<br>3：按标签选择</p>
                     * @return AssetRange <p>资产范围类型（对齐 NotifyAssetRange）<br>枚举值：<br>1：全部主机（可剔除）<br>2：自选主机<br>3：按标签选择</p>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围类型（对齐 NotifyAssetRange）<br>枚举值：<br>1：全部主机（可剔除）<br>2：自选主机<br>3：按标签选择</p>
                     * @param _assetRange <p>资产范围类型（对齐 NotifyAssetRange）<br>枚举值：<br>1：全部主机（可剔除）<br>2：自选主机<br>3：按标签选择</p>
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
                     * 获取<p>选中的主机 quuid 列表，仅 AssetRange=2 生效</p>
                     * @return InstanceIds <p>选中的主机 quuid 列表，仅 AssetRange=2 生效</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>选中的主机 quuid 列表，仅 AssetRange=2 生效</p>
                     * @param _instanceIds <p>选中的主机 quuid 列表，仅 AssetRange=2 生效</p>
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
                     * 获取<p>排除的主机 quuid 列表，仅 AssetRange=1 生效</p>
                     * @return ExcludedInstanceIds <p>排除的主机 quuid 列表，仅 AssetRange=1 生效</p>
                     * 
                     */
                    std::vector<std::string> GetExcludedInstanceIds() const;

                    /**
                     * 设置<p>排除的主机 quuid 列表，仅 AssetRange=1 生效</p>
                     * @param _excludedInstanceIds <p>排除的主机 quuid 列表，仅 AssetRange=1 生效</p>
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
                     * 获取<p>安全中心标签 ID 列表，仅 AssetRange=3 生效</p>
                     * @return TagIds <p>安全中心标签 ID 列表，仅 AssetRange=3 生效</p>
                     * 
                     */
                    std::vector<int64_t> GetTagIds() const;

                    /**
                     * 设置<p>安全中心标签 ID 列表，仅 AssetRange=3 生效</p>
                     * @param _tagIds <p>安全中心标签 ID 列表，仅 AssetRange=3 生效</p>
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
                     * 获取<p>腾讯云标签列表，仅 AssetRange=3 生效<br>入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空</p>
                     * @return CloudTags <p>腾讯云标签列表，仅 AssetRange=3 生效<br>入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空</p>
                     * 
                     */
                    std::vector<std::string> GetCloudTags() const;

                    /**
                     * 设置<p>腾讯云标签列表，仅 AssetRange=3 生效<br>入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空</p>
                     * @param _cloudTags <p>腾讯云标签列表，仅 AssetRange=3 生效<br>入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空</p>
                     * 
                     */
                    void SetCloudTags(const std::vector<std::string>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectIds <p>项目ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectIds <p>项目ID</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                private:

                    /**
                     * <p>资产范围类型（对齐 NotifyAssetRange）<br>枚举值：<br>1：全部主机（可剔除）<br>2：自选主机<br>3：按标签选择</p>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>选中的主机 quuid 列表，仅 AssetRange=2 生效</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>排除的主机 quuid 列表，仅 AssetRange=1 生效</p>
                     */
                    std::vector<std::string> m_excludedInstanceIds;
                    bool m_excludedInstanceIdsHasBeenSet;

                    /**
                     * <p>安全中心标签 ID 列表，仅 AssetRange=3 生效</p>
                     */
                    std::vector<int64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>腾讯云标签列表，仅 AssetRange=3 生效<br>入参限制：AssetRange=3 时 TagIds + CloudTags 不能同时为空</p>
                     */
                    std::vector<std::string> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_
