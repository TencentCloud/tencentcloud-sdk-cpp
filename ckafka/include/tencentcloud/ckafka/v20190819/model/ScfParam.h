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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SCFPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SCFPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Scf类型入参
                */
                class ScfParam : public AbstractModel
                {
                public:
                    ScfParam();
                    ~ScfParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SCF云函数函数名
                     * @return FunctionName SCF云函数函数名
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置SCF云函数函数名
                     * @param _functionName SCF云函数函数名
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
                     * 获取SCF云函数命名空间, 默认为default
                     * @return Namespace SCF云函数命名空间, 默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置SCF云函数命名空间, 默认为default
                     * @param _namespace SCF云函数命名空间, 默认为default
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
                     * 获取SCF云函数版本及别名, 默认为$DEFAULT
                     * @return Qualifier SCF云函数版本及别名, 默认为$DEFAULT
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置SCF云函数版本及别名, 默认为$DEFAULT
                     * @param _qualifier SCF云函数版本及别名, 默认为$DEFAULT
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
                     * 获取每批最大发送消息数, 默认为1000
                     * @return BatchSize 每批最大发送消息数, 默认为1000
                     * 
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置每批最大发送消息数, 默认为1000
                     * @param _batchSize 每批最大发送消息数, 默认为1000
                     * 
                     */
                    void SetBatchSize(const int64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取SCF调用失败后重试次数, 默认为5
                     * @return MaxRetries SCF调用失败后重试次数, 默认为5
                     * 
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置SCF调用失败后重试次数, 默认为5
                     * @param _maxRetries SCF调用失败后重试次数, 默认为5
                     * 
                     */
                    void SetMaxRetries(const int64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     * 
                     */
                    bool MaxRetriesHasBeenSet() const;

                private:

                    /**
                     * SCF云函数函数名
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * SCF云函数命名空间, 默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * SCF云函数版本及别名, 默认为$DEFAULT
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 每批最大发送消息数, 默认为1000
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * SCF调用失败后重试次数, 默认为5
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SCFPARAM_H_
