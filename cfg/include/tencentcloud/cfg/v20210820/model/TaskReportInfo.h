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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKREPORTINFO_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKREPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 演练报告状态信息
                */
                class TaskReportInfo : public AbstractModel
                {
                public:
                    TaskReportInfo();
                    ~TaskReportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0--未开始，1--正在导出，2--导出成功，3--导出失败
                     * @return Stage 0--未开始，1--正在导出，2--导出成功，3--导出失败
                     * 
                     */
                    int64_t GetStage() const;

                    /**
                     * 设置0--未开始，1--正在导出，2--导出成功，3--导出失败
                     * @param _stage 0--未开始，1--正在导出，2--导出成功，3--导出失败
                     * 
                     */
                    void SetStage(const int64_t& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

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
                     * 获取有效期截止时间
                     * @return ExpirationTime 有效期截止时间
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 设置有效期截止时间
                     * @param _expirationTime 有效期截止时间
                     * 
                     */
                    void SetExpirationTime(const std::string& _expirationTime);

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取是否有效
                     * @return Expired 是否有效
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置是否有效
                     * @param _expired 是否有效
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取演练报告cos文件地址
                     * @return CosUrl 演练报告cos文件地址
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置演练报告cos文件地址
                     * @param _cosUrl 演练报告cos文件地址
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取演练报告导出日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Log 演练报告导出日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置演练报告导出日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _log 演练报告导出日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取0--未开始，1--正在归档，2--归档成功，3--归档失败
                     * @return ArchiveStage 0--未开始，1--正在归档，2--归档成功，3--归档失败
                     * 
                     */
                    int64_t GetArchiveStage() const;

                    /**
                     * 设置0--未开始，1--正在归档，2--归档成功，3--归档失败
                     * @param _archiveStage 0--未开始，1--正在归档，2--归档成功，3--归档失败
                     * 
                     */
                    void SetArchiveStage(const int64_t& _archiveStage);

                    /**
                     * 判断参数 ArchiveStage 是否已赋值
                     * @return ArchiveStage 是否已赋值
                     * 
                     */
                    bool ArchiveStageHasBeenSet() const;

                    /**
                     * 获取归档时间
                     * @return ArchiveTime 归档时间
                     * 
                     */
                    std::string GetArchiveTime() const;

                    /**
                     * 设置归档时间
                     * @param _archiveTime 归档时间
                     * 
                     */
                    void SetArchiveTime(const std::string& _archiveTime);

                    /**
                     * 判断参数 ArchiveTime 是否已赋值
                     * @return ArchiveTime 是否已赋值
                     * 
                     */
                    bool ArchiveTimeHasBeenSet() const;

                    /**
                     * 获取归档ID
                     * @return ArchiveUuid 归档ID
                     * 
                     */
                    std::string GetArchiveUuid() const;

                    /**
                     * 设置归档ID
                     * @param _archiveUuid 归档ID
                     * 
                     */
                    void SetArchiveUuid(const std::string& _archiveUuid);

                    /**
                     * 判断参数 ArchiveUuid 是否已赋值
                     * @return ArchiveUuid 是否已赋值
                     * 
                     */
                    bool ArchiveUuidHasBeenSet() const;

                private:

                    /**
                     * 0--未开始，1--正在导出，2--导出成功，3--导出失败
                     */
                    int64_t m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 有效期截止时间
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * 是否有效
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 演练报告cos文件地址
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * 演练报告导出日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 0--未开始，1--正在归档，2--归档成功，3--归档失败
                     */
                    int64_t m_archiveStage;
                    bool m_archiveStageHasBeenSet;

                    /**
                     * 归档时间
                     */
                    std::string m_archiveTime;
                    bool m_archiveTimeHasBeenSet;

                    /**
                     * 归档ID
                     */
                    std::string m_archiveUuid;
                    bool m_archiveUuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKREPORTINFO_H_
