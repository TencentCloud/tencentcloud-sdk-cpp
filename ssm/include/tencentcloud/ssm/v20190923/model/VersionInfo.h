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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_VERSIONINFO_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_VERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * 凭据版本号列表信息
                */
                class VersionInfo : public AbstractModel
                {
                public:
                    VersionInfo();
                    ~VersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本号</p>
                     * @return VersionId <p>版本号</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _versionId <p>版本号</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，unix时间戳。</p>
                     * @return CreateTime <p>创建时间，unix时间戳。</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，unix时间戳。</p>
                     * @param _createTime <p>创建时间，unix时间戳。</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>该版本持有的公开版本标签列表，用于查看标签指向。</p><p>自定义、云产品及 Redis/MongoDB 凭据在版本列表中返回此字段，仅包含 Stage_Current；无标签时返回空数组 []。</p>
                     * @return VersionStages <p>该版本持有的公开版本标签列表，用于查看标签指向。</p><p>自定义、云产品及 Redis/MongoDB 凭据在版本列表中返回此字段，仅包含 Stage_Current；无标签时返回空数组 []。</p>
                     * 
                     */
                    std::vector<std::string> GetVersionStages() const;

                    /**
                     * 设置<p>该版本持有的公开版本标签列表，用于查看标签指向。</p><p>自定义、云产品及 Redis/MongoDB 凭据在版本列表中返回此字段，仅包含 Stage_Current；无标签时返回空数组 []。</p>
                     * @param _versionStages <p>该版本持有的公开版本标签列表，用于查看标签指向。</p><p>自定义、云产品及 Redis/MongoDB 凭据在版本列表中返回此字段，仅包含 Stage_Current；无标签时返回空数组 []。</p>
                     * 
                     */
                    void SetVersionStages(const std::vector<std::string>& _versionStages);

                    /**
                     * 判断参数 VersionStages 是否已赋值
                     * @return VersionStages 是否已赋值
                     * 
                     */
                    bool VersionStagesHasBeenSet() const;

                private:

                    /**
                     * <p>版本号</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>创建时间，unix时间戳。</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>该版本持有的公开版本标签列表，用于查看标签指向。</p><p>自定义、云产品及 Redis/MongoDB 凭据在版本列表中返回此字段，仅包含 Stage_Current；无标签时返回空数组 []。</p>
                     */
                    std::vector<std::string> m_versionStages;
                    bool m_versionStagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_VERSIONINFO_H_
