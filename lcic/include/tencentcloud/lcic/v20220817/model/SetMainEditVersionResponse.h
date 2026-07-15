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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SETMAINEDITVERSIONRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SETMAINEDITVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * SetMainEditVersion返回参数结构体
                */
                class SetMainEditVersionResponse : public AbstractModel
                {
                public:
                    SetMainEditVersionResponse();
                    ~SetMainEditVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>课堂ID</p>
                     * @return ClassId <p>课堂ID</p>
                     * 
                     */
                    uint64_t GetClassId() const;

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取<p>上一个主版本的版本号</p>
                     * @return PreviousMainVersion <p>上一个主版本的版本号</p>
                     * 
                     */
                    uint64_t GetPreviousMainVersion() const;

                    /**
                     * 判断参数 PreviousMainVersion 是否已赋值
                     * @return PreviousMainVersion 是否已赋值
                     * 
                     */
                    bool PreviousMainVersionHasBeenSet() const;

                    /**
                     * 获取<p>当前生效中的主版本号</p>
                     * @return MainVersion <p>当前生效中的主版本号</p>
                     * 
                     */
                    uint64_t GetMainVersion() const;

                    /**
                     * 判断参数 MainVersion 是否已赋值
                     * @return MainVersion 是否已赋值
                     * 
                     */
                    bool MainVersionHasBeenSet() const;

                private:

                    /**
                     * <p>课堂ID</p>
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>上一个主版本的版本号</p>
                     */
                    uint64_t m_previousMainVersion;
                    bool m_previousMainVersionHasBeenSet;

                    /**
                     * <p>当前生效中的主版本号</p>
                     */
                    uint64_t m_mainVersion;
                    bool m_mainVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SETMAINEDITVERSIONRESPONSE_H_
