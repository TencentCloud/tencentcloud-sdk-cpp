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
                     * 获取投递规则属于的TopicId。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @return TopicId 投递规则属于的TopicId。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置投递规则属于的TopicId。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @param _topicId 投递规则属于的TopicId。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
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
通过 [获取函数列表](https://cloud.tencent.com/document/product/583/18582) 获取函数信息。
                     * @return FunctionName 投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
通过 [获取函数列表](https://cloud.tencent.com/document/product/583/18582) 获取函数信息。
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
通过 [获取函数列表](https://cloud.tencent.com/document/product/583/18582) 获取函数信息。
                     * @param _functionName 投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
通过 [获取函数列表](https://cloud.tencent.com/document/product/583/18582) 获取函数信息。
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
                     * 获取命名空间。参考 [命名空间管理](https://cloud.tencent.com/document/product/583/35913)
- 通过 [列出命名空间列表](https://cloud.tencent.com/document/product/583/37158) 获取Name。
                     * @return Namespace 命名空间。参考 [命名空间管理](https://cloud.tencent.com/document/product/583/35913)
- 通过 [列出命名空间列表](https://cloud.tencent.com/document/product/583/37158) 获取Name。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间。参考 [命名空间管理](https://cloud.tencent.com/document/product/583/35913)
- 通过 [列出命名空间列表](https://cloud.tencent.com/document/product/583/37158) 获取Name。
                     * @param _namespace 命名空间。参考 [命名空间管理](https://cloud.tencent.com/document/product/583/35913)
- 通过 [列出命名空间列表](https://cloud.tencent.com/document/product/583/37158) 获取Name。
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
                     * 获取函数版本。
- 通过 [查询函数版本 ](https://cloud.tencent.com/document/product/583/37162) 获取函数版本。
                     * @return Qualifier 函数版本。
- 通过 [查询函数版本 ](https://cloud.tencent.com/document/product/583/37162) 获取函数版本。
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数版本。
- 通过 [查询函数版本 ](https://cloud.tencent.com/document/product/583/37162) 获取函数版本。
                     * @param _qualifier 函数版本。
- 通过 [查询函数版本 ](https://cloud.tencent.com/document/product/583/37162) 获取函数版本。
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
                     * 获取投递最长等待时间，单位：秒。 默认：60
                     * @return Timeout 投递最长等待时间，单位：秒。 默认：60
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置投递最长等待时间，单位：秒。 默认：60
                     * @param _timeout 投递最长等待时间，单位：秒。 默认：60
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
                     * 获取投递最大消息数。默认为100。支持范围[1,10000]
                     * @return MaxMsgNum 投递最大消息数。默认为100。支持范围[1,10000]
                     * 
                     */
                    uint64_t GetMaxMsgNum() const;

                    /**
                     * 设置投递最大消息数。默认为100。支持范围[1,10000]
                     * @param _maxMsgNum 投递最大消息数。默认为100。支持范围[1,10000]
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
                     * 投递规则属于的TopicId。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递的云函数名字。仅支持[事件函数](https://cloud.tencent.com/document/product/583/9694#scf-.E4.BA.8B.E4.BB.B6.E5.87.BD.E6.95.B0) （[函数类型选型](https://cloud.tencent.com/document/product/583/73483)）
通过 [获取函数列表](https://cloud.tencent.com/document/product/583/18582) 获取函数信息。
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 命名空间。参考 [命名空间管理](https://cloud.tencent.com/document/product/583/35913)
- 通过 [列出命名空间列表](https://cloud.tencent.com/document/product/583/37158) 获取Name。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数版本。
- 通过 [查询函数版本 ](https://cloud.tencent.com/document/product/583/37162) 获取函数版本。
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 投递最长等待时间，单位：秒。 默认：60
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 投递最大消息数。默认为100。支持范围[1,10000]
                     */
                    uint64_t m_maxMsgNum;
                    bool m_maxMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDELIVERCLOUDFUNCTIONREQUEST_H_
