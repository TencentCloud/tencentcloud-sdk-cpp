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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SEARCHSERVERLESSSPACEDATAREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SEARCHSERVERLESSSPACEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * SearchServerlessSpaceData请求参数结构体
                */
                class SearchServerlessSpaceDataRequest : public AbstractModel
                {
                public:
                    SearchServerlessSpaceDataRequest();
                    ~SearchServerlessSpaceDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>space空间id</p>
                     * @return SpaceId <p>space空间id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>space空间id</p>
                     * @param _spaceId <p>space空间id</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>请求url</p>
                     * @return Uri <p>请求url</p>
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>请求url</p>
                     * @param _uri <p>请求url</p>
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取<p>method</p><p>枚举值：</p><ul><li>GET： get请求</li><li>POST： post请求</li><li>PUT： put请求</li></ul>
                     * @return Method <p>method</p><p>枚举值：</p><ul><li>GET： get请求</li><li>POST： post请求</li><li>PUT： put请求</li></ul>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>method</p><p>枚举值：</p><ul><li>GET： get请求</li><li>POST： post请求</li><li>PUT： put请求</li></ul>
                     * @param _method <p>method</p><p>枚举值：</p><ul><li>GET： get请求</li><li>POST： post请求</li><li>PUT： put请求</li></ul>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>请求体</p>
                     * @return Body <p>请求体</p>
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置<p>请求体</p>
                     * @param _body <p>请求体</p>
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                private:

                    /**
                     * <p>space空间id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>请求url</p>
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * <p>method</p><p>枚举值：</p><ul><li>GET： get请求</li><li>POST： post请求</li><li>PUT： put请求</li></ul>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>请求体</p>
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SEARCHSERVERLESSSPACEDATAREQUEST_H_
