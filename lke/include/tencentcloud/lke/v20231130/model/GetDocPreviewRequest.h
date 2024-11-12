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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETDOCPREVIEWREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETDOCPREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetDocPreview请求参数结构体
                */
                class GetDocPreviewRequest : public AbstractModel
                {
                public:
                    GetDocPreviewRequest();
                    ~GetDocPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文档BizID
                     * @return DocBizId 文档BizID
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档BizID
                     * @param _docBizId 文档BizID
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * @return TypeKey 存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * @param _typeKey 存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                private:

                    /**
                     * 文档BizID
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETDOCPREVIEWREQUEST_H_
