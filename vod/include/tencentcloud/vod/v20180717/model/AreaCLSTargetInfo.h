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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AREACLSTARGETINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AREACLSTARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 日志推送目标。
                */
                class AreaCLSTargetInfo : public AbstractModel
                {
                public:
                    AreaCLSTargetInfo();
                    ~AreaCLSTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志集所属地区：
<li>ap-guangzhou：广州；</li>
<li>ap-beijing：北京；</li>
<li>ap-chengdu：成都；</li>
<li>ap-chongqing：重庆；</li>
<li>ap-nanjing：南京；</li>
<li>ap-shanghai：上海；</li>
<li>ap-singapore：新加坡。</li>
                     * @return CLSRegion 日志集所属地区：
<li>ap-guangzhou：广州；</li>
<li>ap-beijing：北京；</li>
<li>ap-chengdu：成都；</li>
<li>ap-chongqing：重庆；</li>
<li>ap-nanjing：南京；</li>
<li>ap-shanghai：上海；</li>
<li>ap-singapore：新加坡。</li>
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置日志集所属地区：
<li>ap-guangzhou：广州；</li>
<li>ap-beijing：北京；</li>
<li>ap-chengdu：成都；</li>
<li>ap-chongqing：重庆；</li>
<li>ap-nanjing：南京；</li>
<li>ap-shanghai：上海；</li>
<li>ap-singapore：新加坡。</li>
                     * @param _cLSRegion 日志集所属地区：
<li>ap-guangzhou：广州；</li>
<li>ap-beijing：北京；</li>
<li>ap-chengdu：成都；</li>
<li>ap-chongqing：重庆；</li>
<li>ap-nanjing：南京；</li>
<li>ap-shanghai：上海；</li>
<li>ap-singapore：新加坡。</li>
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取投递的目标主题 ID。
                     * @return TopicId 投递的目标主题 ID。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置投递的目标主题 ID。
                     * @param _topicId 投递的目标主题 ID。
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
                     * 获取投递的目标集 ID。
                     * @return LogsetId 投递的目标集 ID。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置投递的目标集 ID。
                     * @param _logsetId 投递的目标集 ID。
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
                     * 获取日志投递状态。
 ON：启用；
 OFF：停用。
                     * @return Switch 日志投递状态。
 ON：启用；
 OFF：停用。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置日志投递状态。
 ON：启用；
 OFF：停用。
                     * @param _switch 日志投递状态。
 ON：启用；
 OFF：停用。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 日志集所属地区：
<li>ap-guangzhou：广州；</li>
<li>ap-beijing：北京；</li>
<li>ap-chengdu：成都；</li>
<li>ap-chongqing：重庆；</li>
<li>ap-nanjing：南京；</li>
<li>ap-shanghai：上海；</li>
<li>ap-singapore：新加坡。</li>
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * 投递的目标主题 ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递的目标集 ID。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志投递状态。
 ON：启用；
 OFF：停用。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AREACLSTARGETINFO_H_
