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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRKEYWORDLIBRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRKEYWORDLIBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/KeyWordLibIdData.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * UpdateAsrKeyWordLib返回参数结构体
                */
                class UpdateAsrKeyWordLibResponse : public AbstractModel
                {
                public:
                    UpdateAsrKeyWordLibResponse();
                    ~UpdateAsrKeyWordLibResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词表ID数据
                     * @return Data 关键词表ID数据
                     * 
                     */
                    KeyWordLibIdData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 关键词表ID数据
                     */
                    KeyWordLibIdData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRKEYWORDLIBRESPONSE_H_
