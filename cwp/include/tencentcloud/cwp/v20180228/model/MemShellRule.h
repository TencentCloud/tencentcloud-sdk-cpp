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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MEMSHELLRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MEMSHELLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/UuidHostip.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 内存马白名单规则
                */
                class MemShellRule : public AbstractModel
                {
                public:
                    MemShellRule();
                    ~MemShellRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取客户端ID
                     * @return UuidHostips 客户端ID
                     * 
                     */
                    std::vector<UuidHostip> GetUuidHostips() const;

                    /**
                     * 设置客户端ID
                     * @param _uuidHostips 客户端ID
                     * 
                     */
                    void SetUuidHostips(const std::vector<UuidHostip>& _uuidHostips);

                    /**
                     * 判断参数 UuidHostips 是否已赋值
                     * @return UuidHostips 是否已赋值
                     * 
                     */
                    bool UuidHostipsHasBeenSet() const;

                    /**
                     * 获取逻辑运算符，0: 下面5个有效的正则逻辑与 1: 逻辑或
                     * @return LogicalSymbol 逻辑运算符，0: 下面5个有效的正则逻辑与 1: 逻辑或
                     * 
                     */
                    uint64_t GetLogicalSymbol() const;

                    /**
                     * 设置逻辑运算符，0: 下面5个有效的正则逻辑与 1: 逻辑或
                     * @param _logicalSymbol 逻辑运算符，0: 下面5个有效的正则逻辑与 1: 逻辑或
                     * 
                     */
                    void SetLogicalSymbol(const uint64_t& _logicalSymbol);

                    /**
                     * 判断参数 LogicalSymbol 是否已赋值
                     * @return LogicalSymbol 是否已赋值
                     * 
                     */
                    bool LogicalSymbolHasBeenSet() const;

                    /**
                     * 获取类名正则表达式，为空则不匹配
                     * @return ClassNameRegexp 类名正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetClassNameRegexp() const;

                    /**
                     * 设置类名正则表达式，为空则不匹配
                     * @param _classNameRegexp 类名正则表达式，为空则不匹配
                     * 
                     */
                    void SetClassNameRegexp(const std::string& _classNameRegexp);

                    /**
                     * 判断参数 ClassNameRegexp 是否已赋值
                     * @return ClassNameRegexp 是否已赋值
                     * 
                     */
                    bool ClassNameRegexpHasBeenSet() const;

                    /**
                     * 获取父类名正则表达式，为空则不匹配
                     * @return SuperClassNameRegexp 父类名正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetSuperClassNameRegexp() const;

                    /**
                     * 设置父类名正则表达式，为空则不匹配
                     * @param _superClassNameRegexp 父类名正则表达式，为空则不匹配
                     * 
                     */
                    void SetSuperClassNameRegexp(const std::string& _superClassNameRegexp);

                    /**
                     * 判断参数 SuperClassNameRegexp 是否已赋值
                     * @return SuperClassNameRegexp 是否已赋值
                     * 
                     */
                    bool SuperClassNameRegexpHasBeenSet() const;

                    /**
                     * 获取继承的接口正则表达式，为空则不匹配
                     * @return InterfacesRegexp 继承的接口正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetInterfacesRegexp() const;

                    /**
                     * 设置继承的接口正则表达式，为空则不匹配
                     * @param _interfacesRegexp 继承的接口正则表达式，为空则不匹配
                     * 
                     */
                    void SetInterfacesRegexp(const std::string& _interfacesRegexp);

                    /**
                     * 判断参数 InterfacesRegexp 是否已赋值
                     * @return InterfacesRegexp 是否已赋值
                     * 
                     */
                    bool InterfacesRegexpHasBeenSet() const;

                    /**
                     * 获取注释正则表达式，为空则不匹配
                     * @return AnnotationsRegexp 注释正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetAnnotationsRegexp() const;

                    /**
                     * 设置注释正则表达式，为空则不匹配
                     * @param _annotationsRegexp 注释正则表达式，为空则不匹配
                     * 
                     */
                    void SetAnnotationsRegexp(const std::string& _annotationsRegexp);

                    /**
                     * 判断参数 AnnotationsRegexp 是否已赋值
                     * @return AnnotationsRegexp 是否已赋值
                     * 
                     */
                    bool AnnotationsRegexpHasBeenSet() const;

                    /**
                     * 获取所属的类加载器正则表达式，为空则不匹配
                     * @return LoaderClassNameRegexp 所属的类加载器正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetLoaderClassNameRegexp() const;

                    /**
                     * 设置所属的类加载器正则表达式，为空则不匹配
                     * @param _loaderClassNameRegexp 所属的类加载器正则表达式，为空则不匹配
                     * 
                     */
                    void SetLoaderClassNameRegexp(const std::string& _loaderClassNameRegexp);

                    /**
                     * 判断参数 LoaderClassNameRegexp 是否已赋值
                     * @return LoaderClassNameRegexp 是否已赋值
                     * 
                     */
                    bool LoaderClassNameRegexpHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取是否全局规则(是否对appid下所有主机有效， 0:单台uuid 1:全局，默认否)
                     * @return IsGlobal 是否全局规则(是否对appid下所有主机有效， 0:单台uuid 1:全局，默认否)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(是否对appid下所有主机有效， 0:单台uuid 1:全局，默认否)
                     * @param _isGlobal 是否全局规则(是否对appid下所有主机有效， 0:单台uuid 1:全局，默认否)
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取状态 (0: 有效 1: 删除，2：无效（启用开关关闭）)
                     * @return Status 状态 (0: 有效 1: 删除，2：无效（启用开关关闭）)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态 (0: 有效 1: 删除，2：无效（启用开关关闭）)
                     * @param _status 状态 (0: 有效 1: 删除，2：无效（启用开关关闭）)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取处理历史事件， 0:不处理 1:处理
                     * @return HandleHistory 处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置处理历史事件， 0:不处理 1:处理
                     * @param _handleHistory 处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    void SetHandleHistory(const uint64_t& _handleHistory);

                    /**
                     * 判断参数 HandleHistory 是否已赋值
                     * @return HandleHistory 是否已赋值
                     * 
                     */
                    bool HandleHistoryHasBeenSet() const;

                    /**
                     * 获取批次id
                     * @return GroupID 批次id
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置批次id
                     * @param _groupID 批次id
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取应用资产，描述服务器数量，全局时候为：全部服务器
                     * @return MachinesNums 应用资产，描述服务器数量，全局时候为：全部服务器
                     * 
                     */
                    std::string GetMachinesNums() const;

                    /**
                     * 设置应用资产，描述服务器数量，全局时候为：全部服务器
                     * @param _machinesNums 应用资产，描述服务器数量，全局时候为：全部服务器
                     * 
                     */
                    void SetMachinesNums(const std::string& _machinesNums);

                    /**
                     * 判断参数 MachinesNums 是否已赋值
                     * @return MachinesNums 是否已赋值
                     * 
                     */
                    bool MachinesNumsHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return GroupName 策略名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置策略名称
                     * @param _groupName 策略名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取源代码正则表达式，为空则不匹配
                     * @return CodeSourceRegexp 源代码正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetCodeSourceRegexp() const;

                    /**
                     * 设置源代码正则表达式，为空则不匹配
                     * @param _codeSourceRegexp 源代码正则表达式，为空则不匹配
                     * 
                     */
                    void SetCodeSourceRegexp(const std::string& _codeSourceRegexp);

                    /**
                     * 判断参数 CodeSourceRegexp 是否已赋值
                     * @return CodeSourceRegexp 是否已赋值
                     * 
                     */
                    bool CodeSourceRegexpHasBeenSet() const;

                    /**
                     * 获取调用栈正则表达式，为空则不匹配
                     * @return CallStackRegexp 调用栈正则表达式，为空则不匹配
                     * 
                     */
                    std::string GetCallStackRegexp() const;

                    /**
                     * 设置调用栈正则表达式，为空则不匹配
                     * @param _callStackRegexp 调用栈正则表达式，为空则不匹配
                     * 
                     */
                    void SetCallStackRegexp(const std::string& _callStackRegexp);

                    /**
                     * 判断参数 CallStackRegexp 是否已赋值
                     * @return CallStackRegexp 是否已赋值
                     * 
                     */
                    bool CallStackRegexpHasBeenSet() const;

                    /**
                     * 获取文件是否存在， 0:用户没选择规则时候的默认值，1：文件存在，2：文件不存在
                     * @return FileExist 文件是否存在， 0:用户没选择规则时候的默认值，1：文件存在，2：文件不存在
                     * 
                     */
                    uint64_t GetFileExist() const;

                    /**
                     * 设置文件是否存在， 0:用户没选择规则时候的默认值，1：文件存在，2：文件不存在
                     * @param _fileExist 文件是否存在， 0:用户没选择规则时候的默认值，1：文件存在，2：文件不存在
                     * 
                     */
                    void SetFileExist(const uint64_t& _fileExist);

                    /**
                     * 判断参数 FileExist 是否已赋值
                     * @return FileExist 是否已赋值
                     * 
                     */
                    bool FileExistHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::vector<UuidHostip> m_uuidHostips;
                    bool m_uuidHostipsHasBeenSet;

                    /**
                     * 逻辑运算符，0: 下面5个有效的正则逻辑与 1: 逻辑或
                     */
                    uint64_t m_logicalSymbol;
                    bool m_logicalSymbolHasBeenSet;

                    /**
                     * 类名正则表达式，为空则不匹配
                     */
                    std::string m_classNameRegexp;
                    bool m_classNameRegexpHasBeenSet;

                    /**
                     * 父类名正则表达式，为空则不匹配
                     */
                    std::string m_superClassNameRegexp;
                    bool m_superClassNameRegexpHasBeenSet;

                    /**
                     * 继承的接口正则表达式，为空则不匹配
                     */
                    std::string m_interfacesRegexp;
                    bool m_interfacesRegexpHasBeenSet;

                    /**
                     * 注释正则表达式，为空则不匹配
                     */
                    std::string m_annotationsRegexp;
                    bool m_annotationsRegexpHasBeenSet;

                    /**
                     * 所属的类加载器正则表达式，为空则不匹配
                     */
                    std::string m_loaderClassNameRegexp;
                    bool m_loaderClassNameRegexpHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否全局规则(是否对appid下所有主机有效， 0:单台uuid 1:全局，默认否)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 状态 (0: 有效 1: 删除，2：无效（启用开关关闭）)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 处理历史事件， 0:不处理 1:处理
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * 批次id
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * 应用资产，描述服务器数量，全局时候为：全部服务器
                     */
                    std::string m_machinesNums;
                    bool m_machinesNumsHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 源代码正则表达式，为空则不匹配
                     */
                    std::string m_codeSourceRegexp;
                    bool m_codeSourceRegexpHasBeenSet;

                    /**
                     * 调用栈正则表达式，为空则不匹配
                     */
                    std::string m_callStackRegexp;
                    bool m_callStackRegexpHasBeenSet;

                    /**
                     * 文件是否存在， 0:用户没选择规则时候的默认值，1：文件存在，2：文件不存在
                     */
                    uint64_t m_fileExist;
                    bool m_fileExistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MEMSHELLRULE_H_
