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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDeliverCloudFunction请求参数结构体
                */
                class CreateDeliverCloudFunctionRequest : public AbstractModel
                {
                public:
                    CreateDeliverCloudFunctionRequest();
                    ~CreateDeliverCloudFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递规则属于的 topic id
                     * @return TopicId 投递规则属于的 topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置投递规则属于的 topic id
                     * @param _topicId 投递规则属于的 topic id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
                     * @return FunctionName 投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
                     * @param _functionName 投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取函数版本
                     * @return Qualifier 函数版本
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数版本
                     * @param _qualifier 函数版本
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取投递最长等待时间，单位：秒
                     * @return Timeout 投递最长等待时间，单位：秒
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置投递最长等待时间，单位：秒
                     * @param _timeout 投递最长等待时间，单位：秒
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取投递最大消息数
                     * @return MaxMsgNum 投递最大消息数
                     * 
                     */
                    uint64_t GetMaxMsgNum() const;

                    /**
                     * 设置投递最大消息数
                     * @param _maxMsgNum 投递最大消息数
                     * 
                     */
                    void SetMaxMsgNum(const uint64_t& _maxMsgNum);

                    /**
                     * 判断参数 MaxMsgNum 是否已赋值
                     * @return MaxMsgNum 是否已赋值
                     * 
                     */
                    bool MaxMsgNumHasBeenSet() const;

                private:

                    /**
                     * 投递规则属于的 topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 投递最长等待时间，单位：秒
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 投递最大消息数
                     */
                    uint64_t m_maxMsgNum;
                    bool m_maxMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_
