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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/DeleteResult.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DeleteRoomMember返回参数结构体
                */
                class DeleteRoomMemberResponse : public AbstractModel
                {
                public:
                    DeleteRoomMemberResponse();
                    ~DeleteRoomMemberResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>剔除房间或成员的操作结果</p>
                     * @return DeleteResult <p>剔除房间或成员的操作结果</p>
                     * 
                     */
                    DeleteResult GetDeleteResult() const;

                    /**
                     * 判断参数 DeleteResult 是否已赋值
                     * @return DeleteResult 是否已赋值
                     * 
                     */
                    bool DeleteResultHasBeenSet() const;

                private:

                    /**
                     * <p>剔除房间或成员的操作结果</p>
                     */
                    DeleteResult m_deleteResult;
                    bool m_deleteResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERRESPONSE_H_
