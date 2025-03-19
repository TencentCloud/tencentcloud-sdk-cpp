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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICESET_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ControlDeviceRes.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备控制后返回结果集合
                */
                class ControlDeviceSet : public AbstractModel
                {
                public:
                    ControlDeviceSet();
                    ~ControlDeviceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备控制后返回结果集合
                     * @return Set 设备控制后返回结果集合
                     * 
                     */
                    std::vector<ControlDeviceRes> GetSet() const;

                    /**
                     * 设置设备控制后返回结果集合
                     * @param _set 设备控制后返回结果集合
                     * 
                     */
                    void SetSet(const std::vector<ControlDeviceRes>& _set);

                    /**
                     * 判断参数 Set 是否已赋值
                     * @return Set 是否已赋值
                     * 
                     */
                    bool SetHasBeenSet() const;

                private:

                    /**
                     * 设备控制后返回结果集合
                     */
                    std::vector<ControlDeviceRes> m_set;
                    bool m_setHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICESET_H_
