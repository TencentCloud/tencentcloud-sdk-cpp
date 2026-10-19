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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 本地录像播放url数据结构
                */
                class PlayRecordData : public AbstractModel
                {
                public:
                    PlayRecordData();
                    ~PlayRecordData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>flv录像播放地址</p>
                     * @return Flv <p>flv录像播放地址</p>
                     * 
                     */
                    std::string GetFlv() const;

                    /**
                     * 设置<p>flv录像播放地址</p>
                     * @param _flv <p>flv录像播放地址</p>
                     * 
                     */
                    void SetFlv(const std::string& _flv);

                    /**
                     * 判断参数 Flv 是否已赋值
                     * @return Flv 是否已赋值
                     * 
                     */
                    bool FlvHasBeenSet() const;

                    /**
                     * 获取<p>fmp4录像播放地址</p>
                     * @return FMp4 <p>fmp4录像播放地址</p>
                     * 
                     */
                    std::string GetFMp4() const;

                    /**
                     * 设置<p>fmp4录像播放地址</p>
                     * @param _fMp4 <p>fmp4录像播放地址</p>
                     * 
                     */
                    void SetFMp4(const std::string& _fMp4);

                    /**
                     * 判断参数 FMp4 是否已赋值
                     * @return FMp4 是否已赋值
                     * 
                     */
                    bool FMp4HasBeenSet() const;

                private:

                    /**
                     * <p>flv录像播放地址</p>
                     */
                    std::string m_flv;
                    bool m_flvHasBeenSet;

                    /**
                     * <p>fmp4录像播放地址</p>
                     */
                    std::string m_fMp4;
                    bool m_fMp4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDDATA_H_
