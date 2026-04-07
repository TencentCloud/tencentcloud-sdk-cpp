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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OUTPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ManifestInfo.h>
#include <tencentcloud/mps/v20190612/model/DashManifestInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装output信息。
                */
                class OutputInfo : public AbstractModel
                {
                public:
                    OutputInfo();
                    ~OutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HLS DASH。
                     * @return Type HLS DASH。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置HLS DASH。
                     * @param _type HLS DASH。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取output group名称，可以和source的group名称对应关联起来。
                     * @return GroupName output group名称，可以和source的group名称对应关联起来。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置output group名称，可以和source的group名称对应关联起来。
                     * @param _groupName output group名称，可以和source的group名称对应关联起来。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取channel program调度后输出的文件名。
                     * @return ManifestName channel program调度后输出的文件名。
                     * 
                     */
                    std::string GetManifestName() const;

                    /**
                     * 设置channel program调度后输出的文件名。
                     * @param _manifestName channel program调度后输出的文件名。
                     * 
                     */
                    void SetManifestName(const std::string& _manifestName);

                    /**
                     * 判断参数 ManifestName 是否已赋值
                     * @return ManifestName 是否已赋值
                     * 
                     */
                    bool ManifestNameHasBeenSet() const;

                    /**
                     * 获取Type为HLS时manifest配置使用的字段。
                     * @return ManifestConf Type为HLS时manifest配置使用的字段。
                     * 
                     */
                    ManifestInfo GetManifestConf() const;

                    /**
                     * 设置Type为HLS时manifest配置使用的字段。
                     * @param _manifestConf Type为HLS时manifest配置使用的字段。
                     * 
                     */
                    void SetManifestConf(const ManifestInfo& _manifestConf);

                    /**
                     * 判断参数 ManifestConf 是否已赋值
                     * @return ManifestConf 是否已赋值
                     * 
                     */
                    bool ManifestConfHasBeenSet() const;

                    /**
                     * 获取播放地址。
                     * @return PlaybackURL 播放地址。
                     * 
                     */
                    std::string GetPlaybackURL() const;

                    /**
                     * 设置播放地址。
                     * @param _playbackURL 播放地址。
                     * 
                     */
                    void SetPlaybackURL(const std::string& _playbackURL);

                    /**
                     * 判断参数 PlaybackURL 是否已赋值
                     * @return PlaybackURL 是否已赋值
                     * 
                     */
                    bool PlaybackURLHasBeenSet() const;

                    /**
                     * 获取Type为DASH时manifest配置使用的字段。
                     * @return DashManifestConf Type为DASH时manifest配置使用的字段。
                     * 
                     */
                    DashManifestInfo GetDashManifestConf() const;

                    /**
                     * 设置Type为DASH时manifest配置使用的字段。
                     * @param _dashManifestConf Type为DASH时manifest配置使用的字段。
                     * 
                     */
                    void SetDashManifestConf(const DashManifestInfo& _dashManifestConf);

                    /**
                     * 判断参数 DashManifestConf 是否已赋值
                     * @return DashManifestConf 是否已赋值
                     * 
                     */
                    bool DashManifestConfHasBeenSet() const;

                private:

                    /**
                     * HLS DASH。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * output group名称，可以和source的group名称对应关联起来。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * channel program调度后输出的文件名。
                     */
                    std::string m_manifestName;
                    bool m_manifestNameHasBeenSet;

                    /**
                     * Type为HLS时manifest配置使用的字段。
                     */
                    ManifestInfo m_manifestConf;
                    bool m_manifestConfHasBeenSet;

                    /**
                     * 播放地址。
                     */
                    std::string m_playbackURL;
                    bool m_playbackURLHasBeenSet;

                    /**
                     * Type为DASH时manifest配置使用的字段。
                     */
                    DashManifestInfo m_dashManifestConf;
                    bool m_dashManifestConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OUTPUTINFO_H_
