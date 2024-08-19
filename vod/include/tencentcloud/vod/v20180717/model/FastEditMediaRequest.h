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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * FastEditMedia请求参数结构体
                */
                class FastEditMediaRequest : public AbstractModel
                {
                public:
                    FastEditMediaRequest();
                    ~FastEditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的媒体文件信息。最多支持传入100个媒体。
                     * @return FileInfos 输入的媒体文件信息。最多支持传入100个媒体。
                     * 
                     */
                    std::vector<FastEditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置输入的媒体文件信息。最多支持传入100个媒体。
                     * @param _fileInfos 输入的媒体文件信息。最多支持传入100个媒体。
                     * 
                     */
                    void SetFileInfos(const std::vector<FastEditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取ClipMode 用来表示剪辑时间点落在一个 TS 分片中间时，是否包含这个分片。共有两种取值： <li>StartInclusiveEndInclusive：当剪辑起始时间点和结束时间点落在一个分片的中间时，都会包含这个分片；</li> <li>StartInclusiveEndExclusive：当起始时间点落在一个分片的中间时，会包含这个分片；而当结束时间点落在一个分片的中间时，不会包含这个分片。</li> 不填时，默认为 StartInclusiveEndInclusive。
                     * @return ClipMode ClipMode 用来表示剪辑时间点落在一个 TS 分片中间时，是否包含这个分片。共有两种取值： <li>StartInclusiveEndInclusive：当剪辑起始时间点和结束时间点落在一个分片的中间时，都会包含这个分片；</li> <li>StartInclusiveEndExclusive：当起始时间点落在一个分片的中间时，会包含这个分片；而当结束时间点落在一个分片的中间时，不会包含这个分片。</li> 不填时，默认为 StartInclusiveEndInclusive。
                     * 
                     */
                    std::string GetClipMode() const;

                    /**
                     * 设置ClipMode 用来表示剪辑时间点落在一个 TS 分片中间时，是否包含这个分片。共有两种取值： <li>StartInclusiveEndInclusive：当剪辑起始时间点和结束时间点落在一个分片的中间时，都会包含这个分片；</li> <li>StartInclusiveEndExclusive：当起始时间点落在一个分片的中间时，会包含这个分片；而当结束时间点落在一个分片的中间时，不会包含这个分片。</li> 不填时，默认为 StartInclusiveEndInclusive。
                     * @param _clipMode ClipMode 用来表示剪辑时间点落在一个 TS 分片中间时，是否包含这个分片。共有两种取值： <li>StartInclusiveEndInclusive：当剪辑起始时间点和结束时间点落在一个分片的中间时，都会包含这个分片；</li> <li>StartInclusiveEndExclusive：当起始时间点落在一个分片的中间时，会包含这个分片；而当结束时间点落在一个分片的中间时，不会包含这个分片。</li> 不填时，默认为 StartInclusiveEndInclusive。
                     * 
                     */
                    void SetClipMode(const std::string& _clipMode);

                    /**
                     * 判断参数 ClipMode 是否已赋值
                     * @return ClipMode 是否已赋值
                     * 
                     */
                    bool ClipModeHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 输入的媒体文件信息。最多支持传入100个媒体。
                     */
                    std::vector<FastEditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * ClipMode 用来表示剪辑时间点落在一个 TS 分片中间时，是否包含这个分片。共有两种取值： <li>StartInclusiveEndInclusive：当剪辑起始时间点和结束时间点落在一个分片的中间时，都会包含这个分片；</li> <li>StartInclusiveEndExclusive：当起始时间点落在一个分片的中间时，会包含这个分片；而当结束时间点落在一个分片的中间时，不会包含这个分片。</li> 不填时，默认为 StartInclusiveEndInclusive。
                     */
                    std::string m_clipMode;
                    bool m_clipModeHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
