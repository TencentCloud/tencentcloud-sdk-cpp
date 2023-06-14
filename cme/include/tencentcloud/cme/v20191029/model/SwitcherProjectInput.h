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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SWITCHERPROJECTINPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SWITCHERPROJECTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/SwitcherPgmOutputConfig.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 导播台项目输入信息
                */
                class SwitcherProjectInput : public AbstractModel
                {
                public:
                    SwitcherProjectInput();
                    ~SwitcherProjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导播台停止时间，格式按照 ISO 8601 标准表示。若不填，该值默认为当前时间加七天。
                     * @return StopTime 导播台停止时间，格式按照 ISO 8601 标准表示。若不填，该值默认为当前时间加七天。
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置导播台停止时间，格式按照 ISO 8601 标准表示。若不填，该值默认为当前时间加七天。
                     * @param _stopTime 导播台停止时间，格式按照 ISO 8601 标准表示。若不填，该值默认为当前时间加七天。
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取导播台主监输出配置信息。若不填，默认输出 720P。
                     * @return PgmOutputConfig 导播台主监输出配置信息。若不填，默认输出 720P。
                     * 
                     */
                    SwitcherPgmOutputConfig GetPgmOutputConfig() const;

                    /**
                     * 设置导播台主监输出配置信息。若不填，默认输出 720P。
                     * @param _pgmOutputConfig 导播台主监输出配置信息。若不填，默认输出 720P。
                     * 
                     */
                    void SetPgmOutputConfig(const SwitcherPgmOutputConfig& _pgmOutputConfig);

                    /**
                     * 判断参数 PgmOutputConfig 是否已赋值
                     * @return PgmOutputConfig 是否已赋值
                     * 
                     */
                    bool PgmOutputConfigHasBeenSet() const;

                private:

                    /**
                     * 导播台停止时间，格式按照 ISO 8601 标准表示。若不填，该值默认为当前时间加七天。
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 导播台主监输出配置信息。若不填，默认输出 720P。
                     */
                    SwitcherPgmOutputConfig m_pgmOutputConfig;
                    bool m_pgmOutputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SWITCHERPROJECTINPUT_H_
