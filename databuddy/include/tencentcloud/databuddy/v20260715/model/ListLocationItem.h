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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONITEM_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/LocationInfo.h>
#include <tencentcloud/databuddy/v20260715/model/CosEventSubscription.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 列表条目：存储位置与其 COS 文件事件订阅平铺（前端无需二次取值/匹配）
                */
                class ListLocationItem : public AbstractModel
                {
                public:
                    ListLocationItem();
                    ~ListLocationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储位置详情
                     * @return Location 存储位置详情
                     * 
                     */
                    LocationInfo GetLocation() const;

                    /**
                     * 设置存储位置详情
                     * @param _location 存储位置详情
                     * 
                     */
                    void SetLocation(const LocationInfo& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取COS 文件事件订阅明细（未订阅时为空，非空即已订阅）
                     * @return FileEventSubscription COS 文件事件订阅明细（未订阅时为空，非空即已订阅）
                     * 
                     */
                    CosEventSubscription GetFileEventSubscription() const;

                    /**
                     * 设置COS 文件事件订阅明细（未订阅时为空，非空即已订阅）
                     * @param _fileEventSubscription COS 文件事件订阅明细（未订阅时为空，非空即已订阅）
                     * 
                     */
                    void SetFileEventSubscription(const CosEventSubscription& _fileEventSubscription);

                    /**
                     * 判断参数 FileEventSubscription 是否已赋值
                     * @return FileEventSubscription 是否已赋值
                     * 
                     */
                    bool FileEventSubscriptionHasBeenSet() const;

                private:

                    /**
                     * 存储位置详情
                     */
                    LocationInfo m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * COS 文件事件订阅明细（未订阅时为空，非空即已订阅）
                     */
                    CosEventSubscription m_fileEventSubscription;
                    bool m_fileEventSubscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONITEM_H_
