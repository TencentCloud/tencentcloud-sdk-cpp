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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Tag.h>
#include <tencentcloud/scf/v20180416/model/StatusReason.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 函数列表
                */
                class Function : public AbstractModel
                {
                public:
                    Function();
                    ~Function() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改时间
                     * @return ModTime 修改时间
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置修改时间
                     * @param _modTime 修改时间
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return AddTime 创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param _addTime 创建时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取运行时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime 运行时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtime 运行时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
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
                     * 获取函数ID
                     * @return FunctionId 函数ID
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数ID
                     * @param _functionId 函数ID
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
                     * 获取函数状态，状态值及流转[参考此处](https://cloud.tencent.com/document/product/583/17244)
                     * @return Status 函数状态，状态值及流转[参考此处](https://cloud.tencent.com/document/product/583/17244)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置函数状态，状态值及流转[参考此处](https://cloud.tencent.com/document/product/583/17244)
                     * @param _status 函数状态，状态值及流转[参考此处](https://cloud.tencent.com/document/product/583/17244)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取函数状态详情
                     * @return StatusDesc 函数状态详情
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置函数状态详情
                     * @param _statusDesc 函数状态详情
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取函数描述
                     * @return Description 函数描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数描述
                     * @param _description 函数描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取函数标签
                     * @return Tags 函数标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置函数标签
                     * @param _tags 函数标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取函数类型，取值为 HTTP 或者 Event
                     * @return Type 函数类型，取值为 HTTP 或者 Event
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置函数类型，取值为 HTTP 或者 Event
                     * @param _type 函数类型，取值为 HTTP 或者 Event
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取函数状态失败原因
                     * @return StatusReasons 函数状态失败原因
                     * 
                     */
                    std::vector<StatusReason> GetStatusReasons() const;

                    /**
                     * 设置函数状态失败原因
                     * @param _statusReasons 函数状态失败原因
                     * 
                     */
                    void SetStatusReasons(const std::vector<StatusReason>& _statusReasons);

                    /**
                     * 判断参数 StatusReasons 是否已赋值
                     * @return StatusReasons 是否已赋值
                     * 
                     */
                    bool StatusReasonsHasBeenSet() const;

                    /**
                     * 获取函数所有版本预置并发内存总和
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalProvisionedConcurrencyMem 函数所有版本预置并发内存总和
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalProvisionedConcurrencyMem() const;

                    /**
                     * 设置函数所有版本预置并发内存总和
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalProvisionedConcurrencyMem 函数所有版本预置并发内存总和
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalProvisionedConcurrencyMem(const uint64_t& _totalProvisionedConcurrencyMem);

                    /**
                     * 判断参数 TotalProvisionedConcurrencyMem 是否已赋值
                     * @return TotalProvisionedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalProvisionedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取函数并发保留内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedConcurrencyMem 函数并发保留内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReservedConcurrencyMem() const;

                    /**
                     * 设置函数并发保留内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reservedConcurrencyMem 函数并发保留内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReservedConcurrencyMem(const uint64_t& _reservedConcurrencyMem);

                    /**
                     * 判断参数 ReservedConcurrencyMem 是否已赋值
                     * @return ReservedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool ReservedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取函数异步属性，取值 TRUE 或者 FALSE
                     * @return AsyncRunEnable 函数异步属性，取值 TRUE 或者 FALSE
                     * 
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 设置函数异步属性，取值 TRUE 或者 FALSE
                     * @param _asyncRunEnable 函数异步属性，取值 TRUE 或者 FALSE
                     * 
                     */
                    void SetAsyncRunEnable(const std::string& _asyncRunEnable);

                    /**
                     * 判断参数 AsyncRunEnable 是否已赋值
                     * @return AsyncRunEnable 是否已赋值
                     * 
                     */
                    bool AsyncRunEnableHasBeenSet() const;

                    /**
                     * 获取异步函数是否开启调用追踪，取值 TRUE 或者 FALSE
                     * @return TraceEnable 异步函数是否开启调用追踪，取值 TRUE 或者 FALSE
                     * 
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 设置异步函数是否开启调用追踪，取值 TRUE 或者 FALSE
                     * @param _traceEnable 异步函数是否开启调用追踪，取值 TRUE 或者 FALSE
                     * 
                     */
                    void SetTraceEnable(const std::string& _traceEnable);

                    /**
                     * 判断参数 TraceEnable 是否已赋值
                     * @return TraceEnable 是否已赋值
                     * 
                     */
                    bool TraceEnableHasBeenSet() const;

                private:

                    /**
                     * 修改时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 运行时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数状态，状态值及流转[参考此处](https://cloud.tencent.com/document/product/583/17244)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 函数状态详情
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 函数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 函数类型，取值为 HTTP 或者 Event
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 函数状态失败原因
                     */
                    std::vector<StatusReason> m_statusReasons;
                    bool m_statusReasonsHasBeenSet;

                    /**
                     * 函数所有版本预置并发内存总和
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalProvisionedConcurrencyMem;
                    bool m_totalProvisionedConcurrencyMemHasBeenSet;

                    /**
                     * 函数并发保留内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_reservedConcurrencyMem;
                    bool m_reservedConcurrencyMemHasBeenSet;

                    /**
                     * 函数异步属性，取值 TRUE 或者 FALSE
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * 异步函数是否开启调用追踪，取值 TRUE 或者 FALSE
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FUNCTION_H_
