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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSTORAGEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSTORAGEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudStorage.h>
#include <tencentcloud/trtc/v20190722/model/McuCloudVod.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Mcu转推录制，第三方存储参数。
                */
                class McuStorageParams : public AbstractModel
                {
                public:
                    McuStorageParams();
                    ~McuStorageParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方云存储的账号信息（特别说明：若您选择存储至对象存储COS将会收取录制文件投递至COS的费用，详见云端录制收费说明，存储至VOD将不收取此项费用。）。
                     * @return CloudStorage 第三方云存储的账号信息（特别说明：若您选择存储至对象存储COS将会收取录制文件投递至COS的费用，详见云端录制收费说明，存储至VOD将不收取此项费用。）。
                     * 
                     */
                    CloudStorage GetCloudStorage() const;

                    /**
                     * 设置第三方云存储的账号信息（特别说明：若您选择存储至对象存储COS将会收取录制文件投递至COS的费用，详见云端录制收费说明，存储至VOD将不收取此项费用。）。
                     * @param _cloudStorage 第三方云存储的账号信息（特别说明：若您选择存储至对象存储COS将会收取录制文件投递至COS的费用，详见云端录制收费说明，存储至VOD将不收取此项费用。）。
                     * 
                     */
                    void SetCloudStorage(const CloudStorage& _cloudStorage);

                    /**
                     * 判断参数 CloudStorage 是否已赋值
                     * @return CloudStorage 是否已赋值
                     * 
                     */
                    bool CloudStorageHasBeenSet() const;

                    /**
                     * 获取腾讯云云点播的账号信息。
                     * @return McuCloudVod 腾讯云云点播的账号信息。
                     * 
                     */
                    McuCloudVod GetMcuCloudVod() const;

                    /**
                     * 设置腾讯云云点播的账号信息。
                     * @param _mcuCloudVod 腾讯云云点播的账号信息。
                     * 
                     */
                    void SetMcuCloudVod(const McuCloudVod& _mcuCloudVod);

                    /**
                     * 判断参数 McuCloudVod 是否已赋值
                     * @return McuCloudVod 是否已赋值
                     * 
                     */
                    bool McuCloudVodHasBeenSet() const;

                private:

                    /**
                     * 第三方云存储的账号信息（特别说明：若您选择存储至对象存储COS将会收取录制文件投递至COS的费用，详见云端录制收费说明，存储至VOD将不收取此项费用。）。
                     */
                    CloudStorage m_cloudStorage;
                    bool m_cloudStorageHasBeenSet;

                    /**
                     * 腾讯云云点播的账号信息。
                     */
                    McuCloudVod m_mcuCloudVod;
                    bool m_mcuCloudVodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSTORAGEPARAMS_H_
