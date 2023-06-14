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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEBINDSCENEDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEBINDSCENEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeBindSceneDevices请求参数结构体
                */
                class DescribeBindSceneDevicesRequest : public AbstractModel
                {
                public:
                    DescribeBindSceneDevicesRequest();
                    ~DescribeBindSceneDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    int64_t GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const int64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取偏移值
                     * @return Offset 偏移值
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param _offset 偏移值
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取条数限制最大不能超过1000
                     * @return Limit 条数限制最大不能超过1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数限制最大不能超过1000
                     * @param _limit 条数限制最大不能超过1000
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    int64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 偏移值
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 条数限制最大不能超过1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEBINDSCENEDEVICESREQUEST_H_
