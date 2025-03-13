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
                     * 获取录像播放地址
                     * @return Flv 录像播放地址
                     * 
                     */
                    std::string GetFlv() const;

                    /**
                     * 设置录像播放地址
                     * @param _flv 录像播放地址
                     * 
                     */
                    void SetFlv(const std::string& _flv);

                    /**
                     * 判断参数 Flv 是否已赋值
                     * @return Flv 是否已赋值
                     * 
                     */
                    bool FlvHasBeenSet() const;

                private:

                    /**
                     * 录像播放地址
                     */
                    std::string m_flv;
                    bool m_flvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_PLAYRECORDDATA_H_
