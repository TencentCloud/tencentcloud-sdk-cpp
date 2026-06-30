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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NOTIFYASSETCONFIGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NOTIFYASSETCONFIGITEM_H_

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
                * 通知资产范围配置项
                */
                class NotifyAssetConfigItem : public AbstractModel
                {
                public:
                    NotifyAssetConfigItem();
                    ~NotifyAssetConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模块名</p>
                     * @return Module <p>模块名</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块名</p>
                     * @param _module <p>模块名</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>子模块</p>
                     * @return SubModule <p>子模块</p>
                     * 
                     */
                    std::string GetSubModule() const;

                    /**
                     * 设置<p>子模块</p>
                     * @param _subModule <p>子模块</p>
                     * 
                     */
                    void SetSubModule(const std::string& _subModule);

                    /**
                     * 判断参数 SubModule 是否已赋值
                     * @return SubModule 是否已赋值
                     * 
                     */
                    bool SubModuleHasBeenSet() const;

                    /**
                     * 获取<p>资产范围</p><p>枚举值：</p><ul><li>0： 无含义</li><li>1： 全部</li><li>2： 自选</li><li>3： 按标签</li></ul>
                     * @return AssetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 无含义</li><li>1： 全部</li><li>2： 自选</li><li>3： 按标签</li></ul>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围</p><p>枚举值：</p><ul><li>0： 无含义</li><li>1： 全部</li><li>2： 自选</li><li>3： 按标签</li></ul>
                     * @param _assetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 无含义</li><li>1： 全部</li><li>2： 自选</li><li>3： 按标签</li></ul>
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
                     * 获取<p>选中的实例ID</p>
                     * @return InstanceIds <p>选中的实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>选中的实例ID</p>
                     * @param _instanceIds <p>选中的实例ID</p>
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
                     * 获取<p>剔除的实例ID</p>
                     * @return ExcludedInstanceIds <p>剔除的实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetExcludedInstanceIds() const;

                    /**
                     * 设置<p>剔除的实例ID</p>
                     * @param _excludedInstanceIds <p>剔除的实例ID</p>
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
                     * 获取<p>标签ID</p>
                     * @return TagIds <p>标签ID</p>
                     * 
                     */
                    std::vector<int64_t> GetTagIds() const;

                    /**
                     * 设置<p>标签ID</p>
                     * @param _tagIds <p>标签ID</p>
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
                     * 获取<p>云标签</p>
                     * @return CloudTags <p>云标签</p>
                     * 
                     */
                    std::vector<std::string> GetCloudTags() const;

                    /**
                     * 设置<p>云标签</p>
                     * @param _cloudTags <p>云标签</p>
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
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总数</p>
                     * @param _totalCount <p>总数</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>模块名</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>子模块</p>
                     */
                    std::string m_subModule;
                    bool m_subModuleHasBeenSet;

                    /**
                     * <p>资产范围</p><p>枚举值：</p><ul><li>0： 无含义</li><li>1： 全部</li><li>2： 自选</li><li>3： 按标签</li></ul>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>选中的实例ID</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>剔除的实例ID</p>
                     */
                    std::vector<std::string> m_excludedInstanceIds;
                    bool m_excludedInstanceIdsHasBeenSet;

                    /**
                     * <p>标签ID</p>
                     */
                    std::vector<int64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>云标签</p>
                     */
                    std::vector<std::string> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NOTIFYASSETCONFIGITEM_H_
