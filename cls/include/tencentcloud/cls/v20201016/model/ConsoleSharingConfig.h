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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLESHARINGCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLESHARINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsoleSharingParam.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 控制台分享配置
                */
                class ConsoleSharingConfig : public AbstractModel
                {
                public:
                    ConsoleSharingConfig();
                    ~ConsoleSharingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分享链接名称
                     * @return Name 分享链接名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分享链接名称
                     * @param _name 分享链接名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取仪表盘: 1; 检索页:2
                     * @return Type 仪表盘: 1; 检索页:2
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置仪表盘: 1; 检索页:2
                     * @param _type 仪表盘: 1; 检索页:2
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分享链接有效期，单位：毫秒，最长支持30天
                     * @return DurationMilliseconds 分享链接有效期，单位：毫秒，最长支持30天
                     * 
                     */
                    uint64_t GetDurationMilliseconds() const;

                    /**
                     * 设置分享链接有效期，单位：毫秒，最长支持30天
                     * @param _durationMilliseconds 分享链接有效期，单位：毫秒，最长支持30天
                     * 
                     */
                    void SetDurationMilliseconds(const uint64_t& _durationMilliseconds);

                    /**
                     * 判断参数 DurationMilliseconds 是否已赋值
                     * @return DurationMilliseconds 是否已赋值
                     * 
                     */
                    bool DurationMillisecondsHasBeenSet() const;

                    /**
                     * 获取允许访问的资源列表，目前仅支持一个Resource
                     * @return Resources 允许访问的资源列表，目前仅支持一个Resource
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置允许访问的资源列表，目前仅支持一个Resource
                     * @param _resources 允许访问的资源列表，目前仅支持一个Resource
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取分享链接域名，可选范围
- 公网匿名分享：填写clsshare.com
- datasight内网匿名分享(若开启)：datasight内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 分享链接域名，可选范围
- 公网匿名分享：填写clsshare.com
- datasight内网匿名分享(若开启)：datasight内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置分享链接域名，可选范围
- 公网匿名分享：填写clsshare.com
- datasight内网匿名分享(若开启)：datasight内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 分享链接域名，可选范围
- 公网匿名分享：填写clsshare.com
- datasight内网匿名分享(若开启)：datasight内网域名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分享链接加密访问验证码。支持0-9和a-z(不区分大小写)在内的6个字符，可为空，代表免验证码访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyCode 分享链接加密访问验证码。支持0-9和a-z(不区分大小写)在内的6个字符，可为空，代表免验证码访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置分享链接加密访问验证码。支持0-9和a-z(不区分大小写)在内的6个字符，可为空，代表免验证码访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyCode 分享链接加密访问验证码。支持0-9和a-z(不区分大小写)在内的6个字符，可为空，代表免验证码访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                    /**
                     * 获取默认查询范围的开始时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式
                     * @return StartTime 默认查询范围的开始时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置默认查询范围的开始时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式
                     * @param _startTime 默认查询范围的开始时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式
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
                     * 获取默认查询范围的结束时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式。注意，结束时间点要大于开始时间点
                     * @return EndTime 默认查询范围的结束时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式。注意，结束时间点要大于开始时间点
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置默认查询范围的结束时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式。注意，结束时间点要大于开始时间点
                     * @param _endTime 默认查询范围的结束时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式。注意，结束时间点要大于开始时间点
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
                     * 获取仅当StartTime/EndTime为相对时间时使用，基于NowTime计算绝对时间，默认为创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NowTime 仅当StartTime/EndTime为相对时间时使用，基于NowTime计算绝对时间，默认为创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNowTime() const;

                    /**
                     * 设置仅当StartTime/EndTime为相对时间时使用，基于NowTime计算绝对时间，默认为创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nowTime 仅当StartTime/EndTime为相对时间时使用，基于NowTime计算绝对时间，默认为创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNowTime(const uint64_t& _nowTime);

                    /**
                     * 判断参数 NowTime 是否已赋值
                     * @return NowTime 是否已赋值
                     * 
                     */
                    bool NowTimeHasBeenSet() const;

                    /**
                     * 获取默认的检索分析语句，仅当Type为2时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 默认的检索分析语句，仅当Type为2时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsoleSharingParam> GetParams() const;

                    /**
                     * 设置默认的检索分析语句，仅当Type为2时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 默认的检索分析语句，仅当Type为2时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::vector<ConsoleSharingParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取是否允许访问者自行修改检索分析时间范围。默认不锁定（false）
                     * @return IsLockTimeRange 是否允许访问者自行修改检索分析时间范围。默认不锁定（false）
                     * 
                     */
                    bool GetIsLockTimeRange() const;

                    /**
                     * 设置是否允许访问者自行修改检索分析时间范围。默认不锁定（false）
                     * @param _isLockTimeRange 是否允许访问者自行修改检索分析时间范围。默认不锁定（false）
                     * 
                     */
                    void SetIsLockTimeRange(const bool& _isLockTimeRange);

                    /**
                     * 判断参数 IsLockTimeRange 是否已赋值
                     * @return IsLockTimeRange 是否已赋值
                     * 
                     */
                    bool IsLockTimeRangeHasBeenSet() const;

                    /**
                     * 获取是否允许访问者自行修改日志检索语句。在检索页分享中表示检索语句锁定状态；在仪表盘中表示过滤变量锁定状态。默认不锁定（false）
                     * @return IsLockQuery 是否允许访问者自行修改日志检索语句。在检索页分享中表示检索语句锁定状态；在仪表盘中表示过滤变量锁定状态。默认不锁定（false）
                     * 
                     */
                    bool GetIsLockQuery() const;

                    /**
                     * 设置是否允许访问者自行修改日志检索语句。在检索页分享中表示检索语句锁定状态；在仪表盘中表示过滤变量锁定状态。默认不锁定（false）
                     * @param _isLockQuery 是否允许访问者自行修改日志检索语句。在检索页分享中表示检索语句锁定状态；在仪表盘中表示过滤变量锁定状态。默认不锁定（false）
                     * 
                     */
                    void SetIsLockQuery(const bool& _isLockQuery);

                    /**
                     * 判断参数 IsLockQuery 是否已赋值
                     * @return IsLockQuery 是否已赋值
                     * 
                     */
                    bool IsLockQueryHasBeenSet() const;

                    /**
                     * 获取检索页分享是否允许访问者下载日志，默认不允许（false）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportLogExport 检索页分享是否允许访问者下载日志，默认不允许（false）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSupportLogExport() const;

                    /**
                     * 设置检索页分享是否允许访问者下载日志，默认不允许（false）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportLogExport 检索页分享是否允许访问者下载日志，默认不允许（false）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSupportLogExport(const bool& _isSupportLogExport);

                    /**
                     * 判断参数 IsSupportLogExport 是否已赋值
                     * @return IsSupportLogExport 是否已赋值
                     * 
                     */
                    bool IsSupportLogExportHasBeenSet() const;

                private:

                    /**
                     * 分享链接名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 仪表盘: 1; 检索页:2
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分享链接有效期，单位：毫秒，最长支持30天
                     */
                    uint64_t m_durationMilliseconds;
                    bool m_durationMillisecondsHasBeenSet;

                    /**
                     * 允许访问的资源列表，目前仅支持一个Resource
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 分享链接域名，可选范围
- 公网匿名分享：填写clsshare.com
- datasight内网匿名分享(若开启)：datasight内网域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 分享链接加密访问验证码。支持0-9和a-z(不区分大小写)在内的6个字符，可为空，代表免验证码访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                    /**
                     * 默认查询范围的开始时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 默认查询范围的结束时间点，支持绝对时间(13位Unix时间戳)或相对时间表达式。注意，结束时间点要大于开始时间点
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 仅当StartTime/EndTime为相对时间时使用，基于NowTime计算绝对时间，默认为创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nowTime;
                    bool m_nowTimeHasBeenSet;

                    /**
                     * 默认的检索分析语句，仅当Type为2时使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsoleSharingParam> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 是否允许访问者自行修改检索分析时间范围。默认不锁定（false）
                     */
                    bool m_isLockTimeRange;
                    bool m_isLockTimeRangeHasBeenSet;

                    /**
                     * 是否允许访问者自行修改日志检索语句。在检索页分享中表示检索语句锁定状态；在仪表盘中表示过滤变量锁定状态。默认不锁定（false）
                     */
                    bool m_isLockQuery;
                    bool m_isLockQueryHasBeenSet;

                    /**
                     * 检索页分享是否允许访问者下载日志，默认不允许（false）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSupportLogExport;
                    bool m_isSupportLogExportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLESHARINGCONFIG_H_
