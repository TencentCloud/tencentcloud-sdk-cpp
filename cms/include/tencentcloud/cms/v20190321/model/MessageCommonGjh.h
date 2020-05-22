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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MESSAGECOMMONGJH_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MESSAGECOMMONGJH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 广交会公共参数
                */
                class MessageCommonGjh : public AbstractModel
                {
                public:
                    MessageCommonGjh();
                    ~MessageCommonGjh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密码（由腾讯提供）
                     * @return StrPassword 密码（由腾讯提供）
                     */
                    std::string GetStrPassword() const;

                    /**
                     * 设置密码（由腾讯提供）
                     * @param StrPassword 密码（由腾讯提供）
                     */
                    void SetStrPassword(const std::string& _strPassword);

                    /**
                     * 判断参数 StrPassword 是否已赋值
                     * @return StrPassword 是否已赋值
                     */
                    bool StrPasswordHasBeenSet() const;

                    /**
                     * 获取账号（由腾讯提供）
                     * @return UiAppID 账号（由腾讯提供）
                     */
                    int64_t GetUiAppID() const;

                    /**
                     * 设置账号（由腾讯提供）
                     * @param UiAppID 账号（由腾讯提供）
                     */
                    void SetUiAppID(const int64_t& _uiAppID);

                    /**
                     * 判断参数 UiAppID 是否已赋值
                     * @return UiAppID 是否已赋值
                     */
                    bool UiAppIDHasBeenSet() const;

                    /**
                     * 获取业务场景ID: 1：媒体类；2：流媒体类；3：即时通讯类；4：社交日志；5：评论类；6：资料类；7：文件类；8：互动类；9：论坛类
                     * @return UiAppSceneID 业务场景ID: 1：媒体类；2：流媒体类；3：即时通讯类；4：社交日志；5：评论类；6：资料类；7：文件类；8：互动类；9：论坛类
                     */
                    int64_t GetUiAppSceneID() const;

                    /**
                     * 设置业务场景ID: 1：媒体类；2：流媒体类；3：即时通讯类；4：社交日志；5：评论类；6：资料类；7：文件类；8：互动类；9：论坛类
                     * @param UiAppSceneID 业务场景ID: 1：媒体类；2：流媒体类；3：即时通讯类；4：社交日志；5：评论类；6：资料类；7：文件类；8：互动类；9：论坛类
                     */
                    void SetUiAppSceneID(const int64_t& _uiAppSceneID);

                    /**
                     * 判断参数 UiAppSceneID 是否已赋值
                     * @return UiAppSceneID 是否已赋值
                     */
                    bool UiAppSceneIDHasBeenSet() const;

                    /**
                     * 获取请求序列号，会原样回到给业务侧请求序列号，会原样回到给业务侧，用于上游异步处理
                     * @return UiSeq 请求序列号，会原样回到给业务侧请求序列号，会原样回到给业务侧，用于上游异步处理
                     */
                    int64_t GetUiSeq() const;

                    /**
                     * 设置请求序列号，会原样回到给业务侧请求序列号，会原样回到给业务侧，用于上游异步处理
                     * @param UiSeq 请求序列号，会原样回到给业务侧请求序列号，会原样回到给业务侧，用于上游异步处理
                     */
                    void SetUiSeq(const int64_t& _uiSeq);

                    /**
                     * 判断参数 UiSeq 是否已赋值
                     * @return UiSeq 是否已赋值
                     */
                    bool UiSeqHasBeenSet() const;

                private:

                    /**
                     * 密码（由腾讯提供）
                     */
                    std::string m_strPassword;
                    bool m_strPasswordHasBeenSet;

                    /**
                     * 账号（由腾讯提供）
                     */
                    int64_t m_uiAppID;
                    bool m_uiAppIDHasBeenSet;

                    /**
                     * 业务场景ID: 1：媒体类；2：流媒体类；3：即时通讯类；4：社交日志；5：评论类；6：资料类；7：文件类；8：互动类；9：论坛类
                     */
                    int64_t m_uiAppSceneID;
                    bool m_uiAppSceneIDHasBeenSet;

                    /**
                     * 请求序列号，会原样回到给业务侧请求序列号，会原样回到给业务侧，用于上游异步处理
                     */
                    int64_t m_uiSeq;
                    bool m_uiSeqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MESSAGECOMMONGJH_H_
