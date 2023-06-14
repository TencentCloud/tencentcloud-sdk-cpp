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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DATAINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 数据信息
                */
                class DataInfo : public AbstractModel
                {
                public:
                    DataInfo();
                    ~DataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Song Name
                     * @return Name Song Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Song Name
                     * @param _name Song Name
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
                     * 获取歌曲版本
                     * @return Version 歌曲版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置歌曲版本
                     * @param _version 歌曲版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取歌曲总时长（非试听时长）
                     * @return Duration 歌曲总时长（非试听时长）
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置歌曲总时长（非试听时长）
                     * @param _duration 歌曲总时长（非试听时长）
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取试听开始时间
                     * @return AuditionBegin 试听开始时间
                     * 
                     */
                    uint64_t GetAuditionBegin() const;

                    /**
                     * 设置试听开始时间
                     * @param _auditionBegin 试听开始时间
                     * 
                     */
                    void SetAuditionBegin(const uint64_t& _auditionBegin);

                    /**
                     * 判断参数 AuditionBegin 是否已赋值
                     * @return AuditionBegin 是否已赋值
                     * 
                     */
                    bool AuditionBeginHasBeenSet() const;

                    /**
                     * 获取试听结束时间
                     * @return AuditionEnd 试听结束时间
                     * 
                     */
                    uint64_t GetAuditionEnd() const;

                    /**
                     * 设置试听结束时间
                     * @param _auditionEnd 试听结束时间
                     * 
                     */
                    void SetAuditionEnd(const uint64_t& _auditionEnd);

                    /**
                     * 判断参数 AuditionEnd 是否已赋值
                     * @return AuditionEnd 是否已赋值
                     * 
                     */
                    bool AuditionEndHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return TagNames 标签名称
                     * 
                     */
                    std::vector<std::string> GetTagNames() const;

                    /**
                     * 设置标签名称
                     * @param _tagNames 标签名称
                     * 
                     */
                    void SetTagNames(const std::vector<std::string>& _tagNames);

                    /**
                     * 判断参数 TagNames 是否已赋值
                     * @return TagNames 是否已赋值
                     * 
                     */
                    bool TagNamesHasBeenSet() const;

                private:

                    /**
                     * Song Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 歌曲版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 歌曲总时长（非试听时长）
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 试听开始时间
                     */
                    uint64_t m_auditionBegin;
                    bool m_auditionBeginHasBeenSet;

                    /**
                     * 试听结束时间
                     */
                    uint64_t m_auditionEnd;
                    bool m_auditionEndHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::vector<std::string> m_tagNames;
                    bool m_tagNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DATAINFO_H_
