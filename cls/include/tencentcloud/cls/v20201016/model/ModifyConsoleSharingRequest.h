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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSOLESHARINGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSOLESHARINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyConsoleSharing请求参数结构体
                */
                class ModifyConsoleSharingRequest : public AbstractModel
                {
                public:
                    ModifyConsoleSharingRequest();
                    ~ModifyConsoleSharingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取免密分享链接Id
                     * @return SharingId 免密分享链接Id
                     * 
                     */
                    std::string GetSharingId() const;

                    /**
                     * 设置免密分享链接Id
                     * @param _sharingId 免密分享链接Id
                     * 
                     */
                    void SetSharingId(const std::string& _sharingId);

                    /**
                     * 判断参数 SharingId 是否已赋值
                     * @return SharingId 是否已赋值
                     * 
                     */
                    bool SharingIdHasBeenSet() const;

                    /**
                     * 获取指定分享链接有效期，单位：毫秒，最长可设定有效期为30天
                     * @return DurationMilliseconds 指定分享链接有效期，单位：毫秒，最长可设定有效期为30天
                     * 
                     */
                    uint64_t GetDurationMilliseconds() const;

                    /**
                     * 设置指定分享链接有效期，单位：毫秒，最长可设定有效期为30天
                     * @param _durationMilliseconds 指定分享链接有效期，单位：毫秒，最长可设定有效期为30天
                     * 
                     */
                    void SetDurationMilliseconds(const uint64_t& _durationMilliseconds);

                    /**
                     * 判断参数 DurationMilliseconds 是否已赋值
                     * @return DurationMilliseconds 是否已赋值
                     * 
                     */
                    bool DurationMillisecondsHasBeenSet() const;

                private:

                    /**
                     * 免密分享链接Id
                     */
                    std::string m_sharingId;
                    bool m_sharingIdHasBeenSet;

                    /**
                     * 指定分享链接有效期，单位：毫秒，最长可设定有效期为30天
                     */
                    uint64_t m_durationMilliseconds;
                    bool m_durationMillisecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSOLESHARINGREQUEST_H_
