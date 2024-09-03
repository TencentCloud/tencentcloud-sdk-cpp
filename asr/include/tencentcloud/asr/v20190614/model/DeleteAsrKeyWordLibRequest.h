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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_DELETEASRKEYWORDLIBREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_DELETEASRKEYWORDLIBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * DeleteAsrKeyWordLib请求参数结构体
                */
                class DeleteAsrKeyWordLibRequest : public AbstractModel
                {
                public:
                    DeleteAsrKeyWordLibRequest();
                    ~DeleteAsrKeyWordLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词表ID
                     * @return KeyWordLibId 关键词表ID
                     * 
                     */
                    std::string GetKeyWordLibId() const;

                    /**
                     * 设置关键词表ID
                     * @param _keyWordLibId 关键词表ID
                     * 
                     */
                    void SetKeyWordLibId(const std::string& _keyWordLibId);

                    /**
                     * 判断参数 KeyWordLibId 是否已赋值
                     * @return KeyWordLibId 是否已赋值
                     * 
                     */
                    bool KeyWordLibIdHasBeenSet() const;

                private:

                    /**
                     * 关键词表ID
                     */
                    std::string m_keyWordLibId;
                    bool m_keyWordLibIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_DELETEASRKEYWORDLIBREQUEST_H_
