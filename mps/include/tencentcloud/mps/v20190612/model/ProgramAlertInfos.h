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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMALERTINFOS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMALERTINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装program告警信息详情。
                */
                class ProgramAlertInfos : public AbstractModel
                {
                public:
                    ProgramAlertInfos();
                    ~ProgramAlertInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>频道ID。</p>
                     * @return ChannelId <p>频道ID。</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>频道ID。</p>
                     * @param _channelId <p>频道ID。</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>频道名称。</p>
                     * @return ChannelName <p>频道名称。</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>频道名称。</p>
                     * @param _channelName <p>频道名称。</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>ProgramName。</p>
                     * @return ProgramId <p>ProgramName。</p>
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置<p>ProgramName。</p>
                     * @param _programId <p>ProgramName。</p>
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取<p>ProgramName。</p>
                     * @return ProgramName <p>ProgramName。</p>
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置<p>ProgramName。</p>
                     * @param _programName <p>ProgramName。</p>
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取<p>告警事件码。</p>
                     * @return Code <p>告警事件码。</p>
                     * 
                     */
                    uint64_t GetCode() const;

                    /**
                     * 设置<p>告警事件码。</p>
                     * @param _code <p>告警事件码。</p>
                     * 
                     */
                    void SetCode(const uint64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>告警分类。</p>
                     * @return Category <p>告警分类。</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>告警分类。</p>
                     * @param _category <p>告警分类。</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>告警消息。</p>
                     * @return Message <p>告警消息。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>告警消息。</p>
                     * @param _message <p>告警消息。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>更新时间。</p>
                     * @return LastModifiedTime <p>更新时间。</p>
                     * 
                     */
                    uint64_t GetLastModifiedTime() const;

                    /**
                     * 设置<p>更新时间。</p>
                     * @param _lastModifiedTime <p>更新时间。</p>
                     * 
                     */
                    void SetLastModifiedTime(const uint64_t& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>频道ID。</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>频道名称。</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>ProgramName。</p>
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * <p>ProgramName。</p>
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * <p>告警事件码。</p>
                     */
                    uint64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>告警分类。</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>告警消息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>更新时间。</p>
                     */
                    uint64_t m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROGRAMALERTINFOS_H_
