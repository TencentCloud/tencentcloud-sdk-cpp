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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREPLICA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREPLICA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘函数副本。
                */
                class FunctionReplica : public AbstractModel
                {
                public:
                    FunctionReplica();
                    ~FunctionReplica() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数 ID。
                     * @return FunctionId 函数 ID。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID。
                     * @param _functionId 函数 ID。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取边缘函数副本名称。
                     * @return ReplicaName 边缘函数副本名称。
                     * 
                     */
                    std::string GetReplicaName() const;

                    /**
                     * 设置边缘函数副本名称。
                     * @param _replicaName 边缘函数副本名称。
                     * 
                     */
                    void SetReplicaName(const std::string& _replicaName);

                    /**
                     * 判断参数 ReplicaName 是否已赋值
                     * @return ReplicaName 是否已赋值
                     * 
                     */
                    bool ReplicaNameHasBeenSet() const;

                    /**
                     * 获取边缘函数副本内容。格式为 JavaScript 代码。
                     * @return Content 边缘函数副本内容。格式为 JavaScript 代码。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置边缘函数副本内容。格式为 JavaScript 代码。
                     * @param _content 边缘函数副本内容。格式为 JavaScript 代码。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取边缘函数副本描述。
                     * @return Remark 边缘函数副本描述。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置边缘函数副本描述。
                     * @param _remark 边缘函数副本描述。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取边缘函数副本创建时间。
                     * @return CreatedOn 边缘函数副本创建时间。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置边缘函数副本创建时间。
                     * @param _createdOn 边缘函数副本创建时间。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取边缘函数副本更新时间。
                     * @return ModifiedOn 边缘函数副本更新时间。
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置边缘函数副本更新时间。
                     * @param _modifiedOn 边缘函数副本更新时间。
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * 函数 ID。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 边缘函数副本名称。
                     */
                    std::string m_replicaName;
                    bool m_replicaNameHasBeenSet;

                    /**
                     * 边缘函数副本内容。格式为 JavaScript 代码。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 边缘函数副本描述。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 边缘函数副本创建时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 边缘函数副本更新时间。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREPLICA_H_
