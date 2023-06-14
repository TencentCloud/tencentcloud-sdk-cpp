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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVSUGGESTIONSREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVSUGGESTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVSuggestions请求参数结构体
                */
                class DescribeKTVSuggestionsRequest : public AbstractModel
                {
                public:
                    DescribeKTVSuggestionsRequest();
                    ~DescribeKTVSuggestionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取搜索词。
                     * @return KeyWord 搜索词。
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置搜索词。
                     * @param _keyWord 搜索词。
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 搜索词。
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVSUGGESTIONSREQUEST_H_
