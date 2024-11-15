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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PARSENFCDATAREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PARSENFCDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ParseNfcData请求参数结构体
                */
                class ParseNfcDataRequest : public AbstractModel
                {
                public:
                    ParseNfcDataRequest();
                    ~ParseNfcDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取前端SDK返回。
                     * @return ReqId 前端SDK返回。
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置前端SDK返回。
                     * @param _reqId 前端SDK返回。
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                private:

                    /**
                     * 前端SDK返回。
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PARSENFCDATAREQUEST_H_
