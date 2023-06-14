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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_MODIFYAPPSTATUSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_MODIFYAPPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ModifyAppStatus请求参数结构体
                */
                class ModifyAppStatusRequest : public AbstractModel
                {
                public:
                    ModifyAppStatusRequest();
                    ~ModifyAppStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，创建应用后由后台生成并返回。
                     * @return BizId 应用ID，创建应用后由后台生成并返回。
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID，创建应用后由后台生成并返回。
                     * @param _bizId 应用ID，创建应用后由后台生成并返回。
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取应用状态，取值：open/close
                     * @return Status 应用状态，取值：open/close
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置应用状态，取值：open/close
                     * @param _status 应用状态，取值：open/close
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 应用ID，创建应用后由后台生成并返回。
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 应用状态，取值：open/close
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYAPPSTATUSREQUEST_H_
