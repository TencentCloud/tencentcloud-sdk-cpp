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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_IOTMODELDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_IOTMODELDATA_H_

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
                * 物模型历史版本
                */
                class IotModelData : public AbstractModel
                {
                public:
                    IotModelData();
                    ~IotModelData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号
                     * @return Revision 版本号
                     * 
                     */
                    int64_t GetRevision() const;

                    /**
                     * 设置版本号
                     * @param _revision 版本号
                     * 
                     */
                    void SetRevision(const int64_t& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return ReleaseTime 发布时间
                     * 
                     */
                    int64_t GetReleaseTime() const;

                    /**
                     * 设置发布时间
                     * @param _releaseTime 发布时间
                     * 
                     */
                    void SetReleaseTime(const int64_t& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                private:

                    /**
                     * 版本号
                     */
                    int64_t m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 发布时间
                     */
                    int64_t m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_IOTMODELDATA_H_
