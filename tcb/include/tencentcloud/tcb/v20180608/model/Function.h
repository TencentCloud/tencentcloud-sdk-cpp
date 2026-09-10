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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Tag.h>
#include <tencentcloud/tcb/v20180608/model/StatusReason.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云函数
                */
                class Function : public AbstractModel
                {
                public:
                    Function();
                    ~Function() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>修改时间</p>
                     * @return ModTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modTime <p>修改时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return AddTime <p>创建时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _addTime <p>创建时间</p>
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
                     * 获取<p>运行时</p>
                     * @return Runtime <p>运行时</p>
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置<p>运行时</p>
                     * @param _runtime <p>运行时</p>
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
                     * 获取<p>函数名称</p>
                     * @return FunctionName <p>函数名称</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>函数名称</p>
                     * @param _functionName <p>函数名称</p>
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
                     * 获取<p>函数ID</p>
                     * @return FunctionId <p>函数ID</p>
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置<p>函数ID</p>
                     * @param _functionId <p>函数ID</p>
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
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
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
                     * 获取<p>函数状态，状态值</p>
                     * @return Status <p>函数状态，状态值</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>函数状态，状态值</p>
                     * @param _status <p>函数状态，状态值</p>
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
                     * 获取<p>函数状态详情</p>
                     * @return StatusDesc <p>函数状态详情</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>函数状态详情</p>
                     * @param _statusDesc <p>函数状态详情</p>
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
                     * 获取<p>函数描述</p>
                     * @return Description <p>函数描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>函数描述</p>
                     * @param _description <p>函数描述</p>
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
                     * 获取<p>函数标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>函数标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>函数标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>函数标签</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>函数类型，取值为 HTTP 或者 Event</p>
                     * @return Type <p>函数类型，取值为 HTTP 或者 Event</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>函数类型，取值为 HTTP 或者 Event</p>
                     * @param _type <p>函数类型，取值为 HTTP 或者 Event</p>
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
                     * 获取<p>函数状态失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusReasons <p>函数状态失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StatusReason> GetStatusReasons() const;

                    /**
                     * 设置<p>函数状态失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusReasons <p>函数状态失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>函数所有版本预置并发内存总和</p>
                     * @return TotalProvisionedConcurrencyMem <p>函数所有版本预置并发内存总和</p>
                     * 
                     */
                    int64_t GetTotalProvisionedConcurrencyMem() const;

                    /**
                     * 设置<p>函数所有版本预置并发内存总和</p>
                     * @param _totalProvisionedConcurrencyMem <p>函数所有版本预置并发内存总和</p>
                     * 
                     */
                    void SetTotalProvisionedConcurrencyMem(const int64_t& _totalProvisionedConcurrencyMem);

                    /**
                     * 判断参数 TotalProvisionedConcurrencyMem 是否已赋值
                     * @return TotalProvisionedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool TotalProvisionedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取<p>函数并发保留内存</p>
                     * @return ReservedConcurrencyMem <p>函数并发保留内存</p>
                     * 
                     */
                    int64_t GetReservedConcurrencyMem() const;

                    /**
                     * 设置<p>函数并发保留内存</p>
                     * @param _reservedConcurrencyMem <p>函数并发保留内存</p>
                     * 
                     */
                    void SetReservedConcurrencyMem(const int64_t& _reservedConcurrencyMem);

                    /**
                     * 判断参数 ReservedConcurrencyMem 是否已赋值
                     * @return ReservedConcurrencyMem 是否已赋值
                     * 
                     */
                    bool ReservedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取<p>函数异步属性，取值 TRUE 或者 FALSE</p>
                     * @return AsyncRunEnable <p>函数异步属性，取值 TRUE 或者 FALSE</p>
                     * 
                     */
                    std::string GetAsyncRunEnable() const;

                    /**
                     * 设置<p>函数异步属性，取值 TRUE 或者 FALSE</p>
                     * @param _asyncRunEnable <p>函数异步属性，取值 TRUE 或者 FALSE</p>
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
                     * 获取<p>异步函数是否开启调用追踪，取值 TRUE 或者 FALSE</p>
                     * @return TraceEnable <p>异步函数是否开启调用追踪，取值 TRUE 或者 FALSE</p>
                     * 
                     */
                    std::string GetTraceEnable() const;

                    /**
                     * 设置<p>异步函数是否开启调用追踪，取值 TRUE 或者 FALSE</p>
                     * @param _traceEnable <p>异步函数是否开启调用追踪，取值 TRUE 或者 FALSE</p>
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
                     * <p>修改时间</p>
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>运行时</p>
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * <p>函数名称</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>函数ID</p>
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>函数状态，状态值</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>函数状态详情</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>函数描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>函数标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>函数类型，取值为 HTTP 或者 Event</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>函数状态失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatusReason> m_statusReasons;
                    bool m_statusReasonsHasBeenSet;

                    /**
                     * <p>函数所有版本预置并发内存总和</p>
                     */
                    int64_t m_totalProvisionedConcurrencyMem;
                    bool m_totalProvisionedConcurrencyMemHasBeenSet;

                    /**
                     * <p>函数并发保留内存</p>
                     */
                    int64_t m_reservedConcurrencyMem;
                    bool m_reservedConcurrencyMemHasBeenSet;

                    /**
                     * <p>函数异步属性，取值 TRUE 或者 FALSE</p>
                     */
                    std::string m_asyncRunEnable;
                    bool m_asyncRunEnableHasBeenSet;

                    /**
                     * <p>异步函数是否开启调用追踪，取值 TRUE 或者 FALSE</p>
                     */
                    std::string m_traceEnable;
                    bool m_traceEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTION_H_
