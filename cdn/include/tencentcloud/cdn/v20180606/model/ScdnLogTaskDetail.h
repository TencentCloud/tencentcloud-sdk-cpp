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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNLOGTASKDETAIL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNLOGTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnEventLogConditions.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN日志事件详细信息
                */
                class ScdnLogTaskDetail : public AbstractModel
                {
                public:
                    ScdnLogTaskDetail();
                    ~ScdnLogTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取scdn域名
                     * @return Domain scdn域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置scdn域名
                     * @param _domain scdn域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取防护类型
                     * @return Mode 防护类型
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置防护类型
                     * @param _mode 防护类型
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取查询任务开始时间
                     * @return StartTime 查询任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询任务开始时间
                     * @param _startTime 查询任务开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询任务结束时间
                     * @return EndTime 查询任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询任务结束时间
                     * @param _endTime 查询任务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取日志包下载链接
成功返回下载链接，其他情况返回'-'
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadUrl 日志包下载链接
成功返回下载链接，其他情况返回'-'
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置日志包下载链接
成功返回下载链接，其他情况返回'-'
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadUrl 日志包下载链接
成功返回下载链接，其他情况返回'-'
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取任务状态
created->任务已经创建
processing->任务正在执行
done->任务执行成功
failed->任务执行失败
no-log->没有日志产生
                     * @return Status 任务状态
created->任务已经创建
processing->任务正在执行
done->任务执行成功
failed->任务执行失败
no-log->没有日志产生
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
created->任务已经创建
processing->任务正在执行
done->任务执行成功
failed->任务执行失败
no-log->没有日志产生
                     * @param _status 任务状态
created->任务已经创建
processing->任务正在执行
done->任务执行成功
failed->任务执行失败
no-log->没有日志产生
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
                     * 获取日志任务唯一id
                     * @return TaskID 日志任务唯一id
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置日志任务唯一id
                     * @param _taskID 日志任务唯一id
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取攻击类型, 可以为"all"
AttackType映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  file_upload = "文件上传攻击"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  custom_policy = "自定义策略"
  ai_engine= 'AI引擎检出'
  malicious_file_upload= '恶意文件上传'
                     * @return AttackType 攻击类型, 可以为"all"
AttackType映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  file_upload = "文件上传攻击"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  custom_policy = "自定义策略"
  ai_engine= 'AI引擎检出'
  malicious_file_upload= '恶意文件上传'
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型, 可以为"all"
AttackType映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  file_upload = "文件上传攻击"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  custom_policy = "自定义策略"
  ai_engine= 'AI引擎检出'
  malicious_file_upload= '恶意文件上传'
                     * @param _attackType 攻击类型, 可以为"all"
AttackType映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  file_upload = "文件上传攻击"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  custom_policy = "自定义策略"
  ai_engine= 'AI引擎检出'
  malicious_file_upload= '恶意文件上传'
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取防御模式,可以为"all"
DefenceMode映射如下：
  observe = '观察模式'
  intercept = '防御模式'
                     * @return DefenceMode 防御模式,可以为"all"
DefenceMode映射如下：
  observe = '观察模式'
  intercept = '防御模式'
                     * 
                     */
                    std::string GetDefenceMode() const;

                    /**
                     * 设置防御模式,可以为"all"
DefenceMode映射如下：
  observe = '观察模式'
  intercept = '防御模式'
                     * @param _defenceMode 防御模式,可以为"all"
DefenceMode映射如下：
  observe = '观察模式'
  intercept = '防御模式'
                     * 
                     */
                    void SetDefenceMode(const std::string& _defenceMode);

                    /**
                     * 判断参数 DefenceMode 是否已赋值
                     * @return DefenceMode 是否已赋值
                     * 
                     */
                    bool DefenceModeHasBeenSet() const;

                    /**
                     * 获取查询条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 查询条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnEventLogConditions> GetConditions() const;

                    /**
                     * 设置查询条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 查询条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<ScdnEventLogConditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取mainland或overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area mainland或overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置mainland或overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area mainland或overseas
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * scdn域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 防护类型
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 查询任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 日志包下载链接
成功返回下载链接，其他情况返回'-'
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 任务状态
created->任务已经创建
processing->任务正在执行
done->任务执行成功
failed->任务执行失败
no-log->没有日志产生
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 日志任务唯一id
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 攻击类型, 可以为"all"
AttackType映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  file_upload = "文件上传攻击"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  custom_policy = "自定义策略"
  ai_engine= 'AI引擎检出'
  malicious_file_upload= '恶意文件上传'
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 防御模式,可以为"all"
DefenceMode映射如下：
  observe = '观察模式'
  intercept = '防御模式'
                     */
                    std::string m_defenceMode;
                    bool m_defenceModeHasBeenSet;

                    /**
                     * 查询条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnEventLogConditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * mainland或overseas
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNLOGTASKDETAIL_H_
