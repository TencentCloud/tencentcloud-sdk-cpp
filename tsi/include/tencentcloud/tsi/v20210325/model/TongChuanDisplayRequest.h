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

#ifndef TENCENTCLOUD_TSI_V20210325_MODEL_TONGCHUANDISPLAYREQUEST_H_
#define TENCENTCLOUD_TSI_V20210325_MODEL_TONGCHUANDISPLAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsi
    {
        namespace V20210325
        {
            namespace Model
            {
                /**
                * TongChuanDisplay请求参数结构体
                */
                class TongChuanDisplayRequest : public AbstractModel
                {
                public:
                    TongChuanDisplayRequest();
                    ~TongChuanDisplayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一段完整的语音对应一个SessionUuid
                     * @return SessionUuid 一段完整的语音对应一个SessionUuid
                     * 
                     */
                    std::string GetSessionUuid() const;

                    /**
                     * 设置一段完整的语音对应一个SessionUuid
                     * @param _sessionUuid 一段完整的语音对应一个SessionUuid
                     * 
                     */
                    void SetSessionUuid(const std::string& _sessionUuid);

                    /**
                     * 判断参数 SessionUuid 是否已赋值
                     * @return SessionUuid 是否已赋值
                     * 
                     */
                    bool SessionUuidHasBeenSet() const;

                    /**
                     * 获取句子排序方式，1-由新到旧
                     * @return IsNew 句子排序方式，1-由新到旧
                     * 
                     */
                    uint64_t GetIsNew() const;

                    /**
                     * 设置句子排序方式，1-由新到旧
                     * @param _isNew 句子排序方式，1-由新到旧
                     * 
                     */
                    void SetIsNew(const uint64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取最多返回几句，目前只支持 5 条数据
                     * @return SeMax 最多返回几句，目前只支持 5 条数据
                     * 
                     */
                    uint64_t GetSeMax() const;

                    /**
                     * 设置最多返回几句，目前只支持 5 条数据
                     * @param _seMax 最多返回几句，目前只支持 5 条数据
                     * 
                     */
                    void SetSeMax(const uint64_t& _seMax);

                    /**
                     * 判断参数 SeMax 是否已赋值
                     * @return SeMax 是否已赋值
                     * 
                     */
                    bool SeMaxHasBeenSet() const;

                private:

                    /**
                     * 一段完整的语音对应一个SessionUuid
                     */
                    std::string m_sessionUuid;
                    bool m_sessionUuidHasBeenSet;

                    /**
                     * 句子排序方式，1-由新到旧
                     */
                    uint64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 最多返回几句，目前只支持 5 条数据
                     */
                    uint64_t m_seMax;
                    bool m_seMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSI_V20210325_MODEL_TONGCHUANDISPLAYREQUEST_H_
