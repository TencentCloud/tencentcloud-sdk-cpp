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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSET2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSET2017_H_

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
                * 截图输出信息（2017 版）
                */
                class SnapshotByTimeOffset2017 : public AbstractModel
                {
                public:
                    SnapshotByTimeOffset2017();
                    ~SnapshotByTimeOffset2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param _errCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取截图的具体时间点，单位：毫秒。
                     * @return TimeOffset 截图的具体时间点，单位：毫秒。
                     * 
                     */
                    uint64_t GetTimeOffset() const;

                    /**
                     * 设置截图的具体时间点，单位：毫秒。
                     * @param _timeOffset 截图的具体时间点，单位：毫秒。
                     * 
                     */
                    void SetTimeOffset(const uint64_t& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取截图输出文件地址。
                     * @return Url 截图输出文件地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置截图输出文件地址。
                     * @param _url 截图输出文件地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 截图的具体时间点，单位：毫秒。
                     */
                    uint64_t m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 截图输出文件地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSET2017_H_
