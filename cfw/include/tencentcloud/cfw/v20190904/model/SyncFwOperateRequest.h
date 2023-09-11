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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SYNCFWOPERATEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SYNCFWOPERATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * SyncFwOperate请求参数结构体
                */
                class SyncFwOperateRequest : public AbstractModel
                {
                public:
                    SyncFwOperateRequest();
                    ~SyncFwOperateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步操作类型：Route，同步防火墙路由
                     * @return SyncType 同步操作类型：Route，同步防火墙路由
                     * 
                     */
                    std::string GetSyncType() const;

                    /**
                     * 设置同步操作类型：Route，同步防火墙路由
                     * @param _syncType 同步操作类型：Route，同步防火墙路由
                     * 
                     */
                    void SetSyncType(const std::string& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                    /**
                     * 获取防火墙类型；nat,nat防火墙;ew,vpc间防火墙
                     * @return FwType 防火墙类型；nat,nat防火墙;ew,vpc间防火墙
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置防火墙类型；nat,nat防火墙;ew,vpc间防火墙
                     * @param _fwType 防火墙类型；nat,nat防火墙;ew,vpc间防火墙
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                private:

                    /**
                     * 同步操作类型：Route，同步防火墙路由
                     */
                    std::string m_syncType;
                    bool m_syncTypeHasBeenSet;

                    /**
                     * 防火墙类型；nat,nat防火墙;ew,vpc间防火墙
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SYNCFWOPERATEREQUEST_H_
