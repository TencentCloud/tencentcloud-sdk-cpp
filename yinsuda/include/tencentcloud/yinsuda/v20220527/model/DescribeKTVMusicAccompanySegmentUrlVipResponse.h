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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICACCOMPANYSEGMENTURLVIPRESPONSE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICACCOMPANYSEGMENTURLVIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVMusicAccompanySegmentUrlVip返回参数结构体
                */
                class DescribeKTVMusicAccompanySegmentUrlVipResponse : public AbstractModel
                {
                public:
                    DescribeKTVMusicAccompanySegmentUrlVipResponse();
                    ~DescribeKTVMusicAccompanySegmentUrlVipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0:成功获取 1:歌曲下架 2:无权限 3: 非包月会员 4:没有对应的链接
                     * @return Status 0:成功获取 1:歌曲下架 2:无权限 3: 非包月会员 4:没有对应的链接
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取伴奏链接

                     * @return Url 伴奏链接

                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取伴奏类型，如mkv，mp3等

                     * @return ExtName 伴奏类型，如mkv，mp3等

                     * 
                     */
                    std::string GetExtName() const;

                    /**
                     * 判断参数 ExtName 是否已赋值
                     * @return ExtName 是否已赋值
                     * 
                     */
                    bool ExtNameHasBeenSet() const;

                    /**
                     * 获取高潮开始时间

                     * @return SegmentBegin 高潮开始时间

                     * 
                     */
                    int64_t GetSegmentBegin() const;

                    /**
                     * 判断参数 SegmentBegin 是否已赋值
                     * @return SegmentBegin 是否已赋值
                     * 
                     */
                    bool SegmentBeginHasBeenSet() const;

                    /**
                     * 获取高潮结束时间

                     * @return SegmentEnd 高潮结束时间

                     * 
                     */
                    int64_t GetSegmentEnd() const;

                    /**
                     * 判断参数 SegmentEnd 是否已赋值
                     * @return SegmentEnd 是否已赋值
                     * 
                     */
                    bool SegmentEndHasBeenSet() const;

                    /**
                     * 获取链接文件大小 (单位:字节)

                     * @return FileSize 链接文件大小 (单位:字节)

                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * 0:成功获取 1:歌曲下架 2:无权限 3: 非包月会员 4:没有对应的链接
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 伴奏链接

                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 伴奏类型，如mkv，mp3等

                     */
                    std::string m_extName;
                    bool m_extNameHasBeenSet;

                    /**
                     * 高潮开始时间

                     */
                    int64_t m_segmentBegin;
                    bool m_segmentBeginHasBeenSet;

                    /**
                     * 高潮结束时间

                     */
                    int64_t m_segmentEnd;
                    bool m_segmentEndHasBeenSet;

                    /**
                     * 链接文件大小 (单位:字节)

                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVMUSICACCOMPANYSEGMENTURLVIPRESPONSE_H_
