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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_YDRASPBLACKWHITELISTITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_YDRASPBLACKWHITELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 应用防护白名单规则
                */
                class YDRaspBlackWhiteListItem : public AbstractModel
                {
                public:
                    YDRaspBlackWhiteListItem();
                    ~YDRaspBlackWhiteListItem() = default;
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
                     * 获取白名单类型，rasp:漏洞防御,memshell_scan:内存马扫描, memshell_inject:内存马注入
                     * @return Source 白名单类型，rasp:漏洞防御,memshell_scan:内存马扫描, memshell_inject:内存马注入
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置白名单类型，rasp:漏洞防御,memshell_scan:内存马扫描, memshell_inject:内存马注入
                     * @param _source 白名单类型，rasp:漏洞防御,memshell_scan:内存马扫描, memshell_inject:内存马注入
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

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
                     * 获取内存马扫描使用，处理历史事件， 0:不处理 1:处理
                     * @return HandleHistory 内存马扫描使用，处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置内存马扫描使用，处理历史事件， 0:不处理 1:处理
                     * @param _handleHistory 内存马扫描使用，处理历史事件， 0:不处理 1:处理
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
                     * 获取rasp和内存马注入使用，匹配内容，POC，可以是正则表达式（MatchMode=5），也可以是字符串
                     * @return Content rasp和内存马注入使用，匹配内容，POC，可以是正则表达式（MatchMode=5），也可以是字符串
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置rasp和内存马注入使用，匹配内容，POC，可以是正则表达式（MatchMode=5），也可以是字符串
                     * @param _content rasp和内存马注入使用，匹配内容，POC，可以是正则表达式（MatchMode=5），也可以是字符串
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
                     * 获取rasp和内存马注入使用，攻击来源ip,不设置就是全部来源，可以多个，可以有ip段，例如：192.168.57.1/24;172.17.0.1
                     * @return IP rasp和内存马注入使用，攻击来源ip,不设置就是全部来源，可以多个，可以有ip段，例如：192.168.57.1/24;172.17.0.1
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置rasp和内存马注入使用，攻击来源ip,不设置就是全部来源，可以多个，可以有ip段，例如：192.168.57.1/24;172.17.0.1
                     * @param _iP rasp和内存马注入使用，攻击来源ip,不设置就是全部来源，可以多个，可以有ip段，例如：192.168.57.1/24;172.17.0.1
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return PolicyName 规则名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置规则名称
                     * @param _policyName 规则名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取rasp和内存马注入使用，加白方式，0：恶意特征加白，1：请求URL加白
                     * @return FilterType rasp和内存马注入使用，加白方式，0：恶意特征加白，1：请求URL加白
                     * 
                     */
                    int64_t GetFilterType() const;

                    /**
                     * 设置rasp和内存马注入使用，加白方式，0：恶意特征加白，1：请求URL加白
                     * @param _filterType rasp和内存马注入使用，加白方式，0：恶意特征加白，1：请求URL加白
                     * 
                     */
                    void SetFilterType(const int64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取rasp和内存马注入使用，攻击类型，vul.rasp_attacktype_mapping attack_type_id字段
                     * @return AttackType rasp和内存马注入使用，攻击类型，vul.rasp_attacktype_mapping attack_type_id字段
                     * 
                     */
                    int64_t GetAttackType() const;

                    /**
                     * 设置rasp和内存马注入使用，攻击类型，vul.rasp_attacktype_mapping attack_type_id字段
                     * @param _attackType rasp和内存马注入使用，攻击类型，vul.rasp_attacktype_mapping attack_type_id字段
                     * 
                     */
                    void SetAttackType(const int64_t& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取rasp和内存马注入使用，匹配模式，0:完全匹配,1：前缀匹配，2：后缀匹配，4：任意匹配，5：部分匹配，6：正则匹配
                     * @return MatchMode rasp和内存马注入使用，匹配模式，0:完全匹配,1：前缀匹配，2：后缀匹配，4：任意匹配，5：部分匹配，6：正则匹配
                     * 
                     */
                    int64_t GetMatchMode() const;

                    /**
                     * 设置rasp和内存马注入使用，匹配模式，0:完全匹配,1：前缀匹配，2：后缀匹配，4：任意匹配，5：部分匹配，6：正则匹配
                     * @param _matchMode rasp和内存马注入使用，匹配模式，0:完全匹配,1：前缀匹配，2：后缀匹配，4：任意匹配，5：部分匹配，6：正则匹配
                     * 
                     */
                    void SetMatchMode(const int64_t& _matchMode);

                    /**
                     * 判断参数 MatchMode 是否已赋值
                     * @return MatchMode 是否已赋值
                     * 
                     */
                    bool MatchModeHasBeenSet() const;

                    /**
                     * 获取生效资产类型，0: 主机不生效 1: 主机生效
                     * @return CWPEffective 生效资产类型，0: 主机不生效 1: 主机生效
                     * 
                     */
                    int64_t GetCWPEffective() const;

                    /**
                     * 设置生效资产类型，0: 主机不生效 1: 主机生效
                     * @param _cWPEffective 生效资产类型，0: 主机不生效 1: 主机生效
                     * 
                     */
                    void SetCWPEffective(const int64_t& _cWPEffective);

                    /**
                     * 判断参数 CWPEffective 是否已赋值
                     * @return CWPEffective 是否已赋值
                     * 
                     */
                    bool CWPEffectiveHasBeenSet() const;

                    /**
                     * 获取0: 一组quuid 1: 所有主机授权的机器
                     * @return CWPScope 0: 一组quuid 1: 所有主机授权的机器
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置0: 一组quuid 1: 所有主机授权的机器
                     * @param _cWPScope 0: 一组quuid 1: 所有主机授权的机器
                     * 
                     */
                    void SetCWPScope(const int64_t& _cWPScope);

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取指定生效主机机器
                     * @return CWPQuuids 指定生效主机机器
                     * 
                     */
                    std::vector<std::string> GetCWPQuuids() const;

                    /**
                     * 设置指定生效主机机器
                     * @param _cWPQuuids 指定生效主机机器
                     * 
                     */
                    void SetCWPQuuids(const std::vector<std::string>& _cWPQuuids);

                    /**
                     * 判断参数 CWPQuuids 是否已赋值
                     * @return CWPQuuids 是否已赋值
                     * 
                     */
                    bool CWPQuuidsHasBeenSet() const;

                    /**
                     * 获取生效资产类型，0: 容器不生效 1: 容器生效
                     * @return TCSSEffective 生效资产类型，0: 容器不生效 1: 容器生效
                     * 
                     */
                    int64_t GetTCSSEffective() const;

                    /**
                     * 设置生效资产类型，0: 容器不生效 1: 容器生效
                     * @param _tCSSEffective 生效资产类型，0: 容器不生效 1: 容器生效
                     * 
                     */
                    void SetTCSSEffective(const int64_t& _tCSSEffective);

                    /**
                     * 判断参数 TCSSEffective 是否已赋值
                     * @return TCSSEffective 是否已赋值
                     * 
                     */
                    bool TCSSEffectiveHasBeenSet() const;

                    /**
                     * 获取0: 一组quuid 1: 所有容器授权的node
                     * @return TCSSScope 0: 一组quuid 1: 所有容器授权的node
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 设置0: 一组quuid 1: 所有容器授权的node
                     * @param _tCSSScope 0: 一组quuid 1: 所有容器授权的node
                     * 
                     */
                    void SetTCSSScope(const int64_t& _tCSSScope);

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取指定生效容器节点
                     * @return TCSSQuuids 指定生效容器节点
                     * 
                     */
                    std::vector<std::string> GetTCSSQuuids() const;

                    /**
                     * 设置指定生效容器节点
                     * @param _tCSSQuuids 指定生效容器节点
                     * 
                     */
                    void SetTCSSQuuids(const std::vector<std::string>& _tCSSQuuids);

                    /**
                     * 判断参数 TCSSQuuids 是否已赋值
                     * @return TCSSQuuids 是否已赋值
                     * 
                     */
                    bool TCSSQuuidsHasBeenSet() const;

                    /**
                     * 获取生效资产类型，0: 超级节点不生效 1: 超级节点生效
                     * @return EksEffective 生效资产类型，0: 超级节点不生效 1: 超级节点生效
                     * 
                     */
                    int64_t GetEksEffective() const;

                    /**
                     * 设置生效资产类型，0: 超级节点不生效 1: 超级节点生效
                     * @param _eksEffective 生效资产类型，0: 超级节点不生效 1: 超级节点生效
                     * 
                     */
                    void SetEksEffective(const int64_t& _eksEffective);

                    /**
                     * 判断参数 EksEffective 是否已赋值
                     * @return EksEffective 是否已赋值
                     * 
                     */
                    bool EksEffectiveHasBeenSet() const;

                    /**
                     * 获取0: 一组quuid 1: 所有容器授权的超级节点
                     * @return EksScope 0: 一组quuid 1: 所有容器授权的超级节点
                     * 
                     */
                    int64_t GetEksScope() const;

                    /**
                     * 设置0: 一组quuid 1: 所有容器授权的超级节点
                     * @param _eksScope 0: 一组quuid 1: 所有容器授权的超级节点
                     * 
                     */
                    void SetEksScope(const int64_t& _eksScope);

                    /**
                     * 判断参数 EksScope 是否已赋值
                     * @return EksScope 是否已赋值
                     * 
                     */
                    bool EksScopeHasBeenSet() const;

                    /**
                     * 获取指定生效容器超级节点
                     * @return EksNodeUniqueID 指定生效容器超级节点
                     * 
                     */
                    std::vector<std::string> GetEksNodeUniqueID() const;

                    /**
                     * 设置指定生效容器超级节点
                     * @param _eksNodeUniqueID 指定生效容器超级节点
                     * 
                     */
                    void SetEksNodeUniqueID(const std::vector<std::string>& _eksNodeUniqueID);

                    /**
                     * 判断参数 EksNodeUniqueID 是否已赋值
                     * @return EksNodeUniqueID 是否已赋值
                     * 
                     */
                    bool EksNodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取应用资产，全局则：全部主机，否则是选择主机服务器的数量
                     * @return CWPMachinesNums 应用资产，全局则：全部主机，否则是选择主机服务器的数量
                     * 
                     */
                    std::string GetCWPMachinesNums() const;

                    /**
                     * 设置应用资产，全局则：全部主机，否则是选择主机服务器的数量
                     * @param _cWPMachinesNums 应用资产，全局则：全部主机，否则是选择主机服务器的数量
                     * 
                     */
                    void SetCWPMachinesNums(const std::string& _cWPMachinesNums);

                    /**
                     * 判断参数 CWPMachinesNums 是否已赋值
                     * @return CWPMachinesNums 是否已赋值
                     * 
                     */
                    bool CWPMachinesNumsHasBeenSet() const;

                    /**
                     * 获取应用资产，全局则：全部容器主机节点，否则是选择容器主机节点的数量
                     * @return TCSSMachinesNums 应用资产，全局则：全部容器主机节点，否则是选择容器主机节点的数量
                     * 
                     */
                    std::string GetTCSSMachinesNums() const;

                    /**
                     * 设置应用资产，全局则：全部容器主机节点，否则是选择容器主机节点的数量
                     * @param _tCSSMachinesNums 应用资产，全局则：全部容器主机节点，否则是选择容器主机节点的数量
                     * 
                     */
                    void SetTCSSMachinesNums(const std::string& _tCSSMachinesNums);

                    /**
                     * 判断参数 TCSSMachinesNums 是否已赋值
                     * @return TCSSMachinesNums 是否已赋值
                     * 
                     */
                    bool TCSSMachinesNumsHasBeenSet() const;

                    /**
                     * 获取应用资产，全局则：全部超级节点，否则是选择超级节点的数量
                     * @return EksMachinesNums 应用资产，全局则：全部超级节点，否则是选择超级节点的数量
                     * 
                     */
                    std::string GetEksMachinesNums() const;

                    /**
                     * 设置应用资产，全局则：全部超级节点，否则是选择超级节点的数量
                     * @param _eksMachinesNums 应用资产，全局则：全部超级节点，否则是选择超级节点的数量
                     * 
                     */
                    void SetEksMachinesNums(const std::string& _eksMachinesNums);

                    /**
                     * 判断参数 EksMachinesNums 是否已赋值
                     * @return EksMachinesNums 是否已赋值
                     * 
                     */
                    bool EksMachinesNumsHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

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
                     * 白名单类型，rasp:漏洞防御,memshell_scan:内存马扫描, memshell_inject:内存马注入
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

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
                     * 内存马扫描使用，处理历史事件， 0:不处理 1:处理
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * rasp和内存马注入使用，匹配内容，POC，可以是正则表达式（MatchMode=5），也可以是字符串
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * rasp和内存马注入使用，攻击来源ip,不设置就是全部来源，可以多个，可以有ip段，例如：192.168.57.1/24;172.17.0.1
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * rasp和内存马注入使用，加白方式，0：恶意特征加白，1：请求URL加白
                     */
                    int64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * rasp和内存马注入使用，攻击类型，vul.rasp_attacktype_mapping attack_type_id字段
                     */
                    int64_t m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * rasp和内存马注入使用，匹配模式，0:完全匹配,1：前缀匹配，2：后缀匹配，4：任意匹配，5：部分匹配，6：正则匹配
                     */
                    int64_t m_matchMode;
                    bool m_matchModeHasBeenSet;

                    /**
                     * 生效资产类型，0: 主机不生效 1: 主机生效
                     */
                    int64_t m_cWPEffective;
                    bool m_cWPEffectiveHasBeenSet;

                    /**
                     * 0: 一组quuid 1: 所有主机授权的机器
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * 指定生效主机机器
                     */
                    std::vector<std::string> m_cWPQuuids;
                    bool m_cWPQuuidsHasBeenSet;

                    /**
                     * 生效资产类型，0: 容器不生效 1: 容器生效
                     */
                    int64_t m_tCSSEffective;
                    bool m_tCSSEffectiveHasBeenSet;

                    /**
                     * 0: 一组quuid 1: 所有容器授权的node
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * 指定生效容器节点
                     */
                    std::vector<std::string> m_tCSSQuuids;
                    bool m_tCSSQuuidsHasBeenSet;

                    /**
                     * 生效资产类型，0: 超级节点不生效 1: 超级节点生效
                     */
                    int64_t m_eksEffective;
                    bool m_eksEffectiveHasBeenSet;

                    /**
                     * 0: 一组quuid 1: 所有容器授权的超级节点
                     */
                    int64_t m_eksScope;
                    bool m_eksScopeHasBeenSet;

                    /**
                     * 指定生效容器超级节点
                     */
                    std::vector<std::string> m_eksNodeUniqueID;
                    bool m_eksNodeUniqueIDHasBeenSet;

                    /**
                     * 应用资产，全局则：全部主机，否则是选择主机服务器的数量
                     */
                    std::string m_cWPMachinesNums;
                    bool m_cWPMachinesNumsHasBeenSet;

                    /**
                     * 应用资产，全局则：全部容器主机节点，否则是选择容器主机节点的数量
                     */
                    std::string m_tCSSMachinesNums;
                    bool m_tCSSMachinesNumsHasBeenSet;

                    /**
                     * 应用资产，全局则：全部超级节点，否则是选择超级节点的数量
                     */
                    std::string m_eksMachinesNums;
                    bool m_eksMachinesNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_YDRASPBLACKWHITELISTITEM_H_
