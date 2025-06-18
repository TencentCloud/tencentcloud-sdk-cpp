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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateLogset请求参数结构体
                */
                class CreateLogsetRequest : public AbstractModel
                {
                public:
                    CreateLogsetRequest();
                    ~CreateLogsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集名字，不能重名
                     * @return LogsetName 日志集名字，不能重名
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名字，不能重名
                     * @param _logsetName 日志集名字，不能重名
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取标签描述列表。最大支持10个标签键值对，并且不能有重复的键值对
                     * @return Tags 标签描述列表。最大支持10个标签键值对，并且不能有重复的键值对
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表。最大支持10个标签键值对，并且不能有重复的键值对
                     * @param _tags 标签描述列表。最大支持10个标签键值对，并且不能有重复的键值对
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取日志集ID，格式为：用户自定义部分-用户appid，用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符，尾部需要使用-拼接用户appid
                     * @return LogsetId 日志集ID，格式为：用户自定义部分-用户appid，用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符，尾部需要使用-拼接用户appid
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID，格式为：用户自定义部分-用户appid，用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符，尾部需要使用-拼接用户appid
                     * @param _logsetId 日志集ID，格式为：用户自定义部分-用户appid，用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符，尾部需要使用-拼接用户appid
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * 日志集名字，不能重名
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 标签描述列表。最大支持10个标签键值对，并且不能有重复的键值对
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 日志集ID，格式为：用户自定义部分-用户appid，用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符，尾部需要使用-拼接用户appid
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_
