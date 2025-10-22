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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SWITCHINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SWITCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 日志开关详细信息
                */
                class SwitchInfo : public AbstractModel
                {
                public:
                    SwitchInfo();
                    ~SwitchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启标识符 true代表开启
                     * @return Enable 开启标识符 true代表开启
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置开启标识符 true代表开启
                     * @param _enable 开启标识符 true代表开启
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取获取日志状态失败时，返回错误信息
                     * @return ErrorMsg 获取日志状态失败时，返回错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置获取日志状态失败时，返回错误信息
                     * @param _errorMsg 获取日志状态失败时，返回错误信息
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取CLS日志集ID
                     * @return LogsetId CLS日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置CLS日志集ID
                     * @param _logsetId CLS日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题状态，opened表示已开启，opening开启中，closed表示已关闭，closing 表示关闭中
                     * @return Status 日志主题状态，opened表示已开启，opening开启中，closed表示已关闭，closing 表示关闭中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置日志主题状态，opened表示已开启，opening开启中，closed表示已关闭，closing 表示关闭中
                     * @param _status 日志主题状态，opened表示已开启，opening开启中，closed表示已关闭，closing 表示关闭中
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
                     * 获取CLS日志主题ID
                     * @return TopicId CLS日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置CLS日志主题ID
                     * @param _topicId CLS日志主题ID
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
                     * 获取CLS日志主题所属region
                     * @return TopicRegion CLS日志主题所属region
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 设置CLS日志主题所属region
                     * @param _topicRegion CLS日志主题所属region
                     * 
                     */
                    void SetTopicRegion(const std::string& _topicRegion);

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                    /**
                     * 获取是否可升级
                     * @return UpgradeAble 是否可升级
                     * 
                     */
                    bool GetUpgradeAble() const;

                    /**
                     * 设置是否可升级
                     * @param _upgradeAble 是否可升级
                     * 
                     */
                    void SetUpgradeAble(const bool& _upgradeAble);

                    /**
                     * 判断参数 UpgradeAble 是否已赋值
                     * @return UpgradeAble 是否已赋值
                     * 
                     */
                    bool UpgradeAbleHasBeenSet() const;

                    /**
                     * 获取当前log-agent版本
                     * @return Version 当前log-agent版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置当前log-agent版本
                     * @param _version 当前log-agent版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 开启标识符 true代表开启
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 获取日志状态失败时，返回错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * CLS日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题状态，opened表示已开启，opening开启中，closed表示已关闭，closing 表示关闭中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CLS日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * CLS日志主题所属region
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                    /**
                     * 是否可升级
                     */
                    bool m_upgradeAble;
                    bool m_upgradeAbleHasBeenSet;

                    /**
                     * 当前log-agent版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SWITCHINFO_H_
