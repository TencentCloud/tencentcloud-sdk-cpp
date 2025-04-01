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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETRTCSIGNATURESWITHROOMIDRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETRTCSIGNATURESWITHROOMIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TRTCParams.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateTRTCSignaturesWithRoomId返回参数结构体
                */
                class CreateTRTCSignaturesWithRoomIdResponse : public AbstractModel
                {
                public:
                    CreateTRTCSignaturesWithRoomIdResponse();
                    ~CreateTRTCSignaturesWithRoomIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回参数数组
                     * @return TRTCParamList 返回参数数组
                     * 
                     */
                    std::vector<TRTCParams> GetTRTCParamList() const;

                    /**
                     * 判断参数 TRTCParamList 是否已赋值
                     * @return TRTCParamList 是否已赋值
                     * 
                     */
                    bool TRTCParamListHasBeenSet() const;

                private:

                    /**
                     * 返回参数数组
                     */
                    std::vector<TRTCParams> m_tRTCParamList;
                    bool m_tRTCParamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETRTCSIGNATURESWITHROOMIDRESPONSE_H_
