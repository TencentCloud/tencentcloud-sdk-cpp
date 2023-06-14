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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_OTAPUBHISTORY_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_OTAPUBHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 产品发布过的全部版本
                */
                class OtaPubHistory : public AbstractModel
                {
                public:
                    OtaPubHistory();
                    ~OtaPubHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名称
                     * @return OtaVersion 版本名称
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置版本名称
                     * @param _otaVersion 版本名称
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取发布时间，unix时间戳，单位：秒
                     * @return PublishTime 发布时间，unix时间戳，单位：秒
                     * 
                     */
                    uint64_t GetPublishTime() const;

                    /**
                     * 设置发布时间，unix时间戳，单位：秒
                     * @param _publishTime 发布时间，unix时间戳，单位：秒
                     * 
                     */
                    void SetPublishTime(const uint64_t& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                private:

                    /**
                     * 版本名称
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 发布时间，unix时间戳，单位：秒
                     */
                    uint64_t m_publishTime;
                    bool m_publishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_OTAPUBHISTORY_H_
