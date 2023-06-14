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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTDIAGNOSEREPORTREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTDIAGNOSEREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListDiagnoseReport请求参数结构体
                */
                class ListDiagnoseReportRequest : public AbstractModel
                {
                public:
                    ListDiagnoseReportRequest();
                    ~ListDiagnoseReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于搜索诊断URL的关键字，不填时返回用户所有的诊断任务。
                     * @return KeyWords 用于搜索诊断URL的关键字，不填时返回用户所有的诊断任务。
                     * 
                     */
                    std::string GetKeyWords() const;

                    /**
                     * 设置用于搜索诊断URL的关键字，不填时返回用户所有的诊断任务。
                     * @param _keyWords 用于搜索诊断URL的关键字，不填时返回用户所有的诊断任务。
                     * 
                     */
                    void SetKeyWords(const std::string& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取用于搜索诊断系统返回的诊断链接，形如：http://cdn.cloud.tencent.com/self_diagnose/xxxxx
                     * @return DiagnoseLink 用于搜索诊断系统返回的诊断链接，形如：http://cdn.cloud.tencent.com/self_diagnose/xxxxx
                     * 
                     */
                    std::string GetDiagnoseLink() const;

                    /**
                     * 设置用于搜索诊断系统返回的诊断链接，形如：http://cdn.cloud.tencent.com/self_diagnose/xxxxx
                     * @param _diagnoseLink 用于搜索诊断系统返回的诊断链接，形如：http://cdn.cloud.tencent.com/self_diagnose/xxxxx
                     * 
                     */
                    void SetDiagnoseLink(const std::string& _diagnoseLink);

                    /**
                     * 判断参数 DiagnoseLink 是否已赋值
                     * @return DiagnoseLink 是否已赋值
                     * 
                     */
                    bool DiagnoseLinkHasBeenSet() const;

                    /**
                     * 获取请求源带协议头，形如：https://console.cloud.tencent.com
                     * @return Origin 请求源带协议头，形如：https://console.cloud.tencent.com
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置请求源带协议头，形如：https://console.cloud.tencent.com
                     * @param _origin 请求源带协议头，形如：https://console.cloud.tencent.com
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                private:

                    /**
                     * 用于搜索诊断URL的关键字，不填时返回用户所有的诊断任务。
                     */
                    std::string m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * 用于搜索诊断系统返回的诊断链接，形如：http://cdn.cloud.tencent.com/self_diagnose/xxxxx
                     */
                    std::string m_diagnoseLink;
                    bool m_diagnoseLinkHasBeenSet;

                    /**
                     * 请求源带协议头，形如：https://console.cloud.tencent.com
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTDIAGNOSEREPORTREQUEST_H_
