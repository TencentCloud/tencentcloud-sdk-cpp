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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_QUOTAGROUPOVERVIEW_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_QUOTAGROUPOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>
#include <tencentcloud/ags/v20250920/model/QuotaResourceInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 配额组资源信息
                */
                class QuotaGroupOverview : public AbstractModel
                {
                public:
                    QuotaGroupOverview();
                    ~QuotaGroupOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配额组关联的标签键值</p>
                     * @return Tag <p>配额组关联的标签键值</p>
                     * 
                     */
                    Tag GetTag() const;

                    /**
                     * 设置<p>配额组关联的标签键值</p>
                     * @param _tag <p>配额组关联的标签键值</p>
                     * 
                     */
                    void SetTag(const Tag& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>配额组名称</p>
                     * @return Name <p>配额组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>配额组名称</p>
                     * @param _name <p>配额组名称</p>
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
                     * 获取<p>配额组各资源维度的配额上限</p>
                     * @return Quota <p>配额组各资源维度的配额上限</p>
                     * 
                     */
                    QuotaResourceInfo GetQuota() const;

                    /**
                     * 设置<p>配额组各资源维度的配额上限</p>
                     * @param _quota <p>配额组各资源维度的配额上限</p>
                     * 
                     */
                    void SetQuota(const QuotaResourceInfo& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取<p>配额组各资源维度的当前用量</p>
                     * @return Usage <p>配额组各资源维度的当前用量</p>
                     * 
                     */
                    QuotaResourceInfo GetUsage() const;

                    /**
                     * 设置<p>配额组各资源维度的当前用量</p>
                     * @param _usage <p>配额组各资源维度的当前用量</p>
                     * 
                     */
                    void SetUsage(const QuotaResourceInfo& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：RFC3339 格式</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：RFC3339 格式</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：RFC3339 格式</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：RFC3339 格式</p>
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
                     * 获取<p>最后更新时间</p><p>参数格式：RFC3339 格式</p>
                     * @return UpdateTime <p>最后更新时间</p><p>参数格式：RFC3339 格式</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最后更新时间</p><p>参数格式：RFC3339 格式</p>
                     * @param _updateTime <p>最后更新时间</p><p>参数格式：RFC3339 格式</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>配额组关联的标签键值</p>
                     */
                    Tag m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>配额组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>配额组各资源维度的配额上限</p>
                     */
                    QuotaResourceInfo m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * <p>配额组各资源维度的当前用量</p>
                     */
                    QuotaResourceInfo m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：RFC3339 格式</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后更新时间</p><p>参数格式：RFC3339 格式</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_QUOTAGROUPOVERVIEW_H_
