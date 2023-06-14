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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHSESSIONCOMMANDREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHSESSIONCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * SearchSessionCommand请求参数结构体
                */
                class SearchSessionCommandRequest : public AbstractModel
                {
                public:
                    SearchSessionCommandRequest();
                    ~SearchSessionCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检索的目标命令，为模糊搜索
                     * @return Cmd 检索的目标命令，为模糊搜索
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置检索的目标命令，为模糊搜索
                     * @param _cmd 检索的目标命令，为模糊搜索
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取开始时间，不得早于当前时间的180天前
                     * @return StartTime 开始时间，不得早于当前时间的180天前
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，不得早于当前时间的180天前
                     * @param _startTime 开始时间，不得早于当前时间的180天前
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
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取默认值为20，最大200
                     * @return Limit 默认值为20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置默认值为20，最大200
                     * @param _limit 默认值为20，最大200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Cmd字段前端是否做base64加密
0：否，1：是
                     * @return Encoding Cmd字段前端是否做base64加密
0：否，1：是
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置Cmd字段前端是否做base64加密
0：否，1：是
                     * @param _encoding Cmd字段前端是否做base64加密
0：否，1：是
                     * 
                     */
                    void SetEncoding(const uint64_t& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 检索的目标命令，为模糊搜索
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 开始时间，不得早于当前时间的180天前
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 默认值为20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Cmd字段前端是否做base64加密
0：否，1：是
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHSESSIONCOMMANDREQUEST_H_
