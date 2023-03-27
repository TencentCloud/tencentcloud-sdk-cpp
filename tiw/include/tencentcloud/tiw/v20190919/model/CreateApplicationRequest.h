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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Tag.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateApplication请求参数结构体
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用SdkAppId
                     * @return SdkAppId 应用SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用SdkAppId
                     * @param SdkAppId 应用SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取App名字
                     * @return AppName App名字
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置App名字
                     * @param AppName App名字
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取创建IM应用需要的SKey
                     * @return SKey 创建IM应用需要的SKey
                     */
                    std::string GetSKey() const;

                    /**
                     * 设置创建IM应用需要的SKey
                     * @param SKey 创建IM应用需要的SKey
                     */
                    void SetSKey(const std::string& _sKey);

                    /**
                     * 判断参数 SKey 是否已赋值
                     * @return SKey 是否已赋值
                     */
                    bool SKeyHasBeenSet() const;

                    /**
                     * 获取创建IM应用需要的TinyId
                     * @return TinyId 创建IM应用需要的TinyId
                     */
                    std::string GetTinyId() const;

                    /**
                     * 设置创建IM应用需要的TinyId
                     * @param TinyId 创建IM应用需要的TinyId
                     */
                    void SetTinyId(const std::string& _tinyId);

                    /**
                     * 判断参数 TinyId 是否已赋值
                     * @return TinyId 是否已赋值
                     */
                    bool TinyIdHasBeenSet() const;

                    /**
                     * 获取需要绑定的标签列表
                     * @return TagList 需要绑定的标签列表
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置需要绑定的标签列表
                     * @param TagList 需要绑定的标签列表
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 应用SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * App名字
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 创建IM应用需要的SKey
                     */
                    std::string m_sKey;
                    bool m_sKeyHasBeenSet;

                    /**
                     * 创建IM应用需要的TinyId
                     */
                    std::string m_tinyId;
                    bool m_tinyIdHasBeenSet;

                    /**
                     * 需要绑定的标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEAPPLICATIONREQUEST_H_
