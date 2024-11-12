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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_TASKSTATUS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_TASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 任务扫描状态列表
                */
                class TaskStatus : public AbstractModel
                {
                public:
                    TaskStatus();
                    ~TaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扫描中（包含初始化）
                     * @return Scanning 扫描中（包含初始化）
                     * 
                     */
                    std::string GetScanning() const;

                    /**
                     * 设置扫描中（包含初始化）
                     * @param _scanning 扫描中（包含初始化）
                     * 
                     */
                    void SetScanning(const std::string& _scanning);

                    /**
                     * 判断参数 Scanning 是否已赋值
                     * @return Scanning 是否已赋值
                     * 
                     */
                    bool ScanningHasBeenSet() const;

                    /**
                     * 获取扫描终止（包含终止中）
                     * @return Ok 扫描终止（包含终止中）
                     * 
                     */
                    std::string GetOk() const;

                    /**
                     * 设置扫描终止（包含终止中）
                     * @param _ok 扫描终止（包含终止中）
                     * 
                     */
                    void SetOk(const std::string& _ok);

                    /**
                     * 判断参数 Ok 是否已赋值
                     * @return Ok 是否已赋值
                     * 
                     */
                    bool OkHasBeenSet() const;

                    /**
                     * 获取扫描失败
                     * @return Fail 扫描失败
                     * 
                     */
                    std::string GetFail() const;

                    /**
                     * 设置扫描失败
                     * @param _fail 扫描失败
                     * 
                     */
                    void SetFail(const std::string& _fail);

                    /**
                     * 判断参数 Fail 是否已赋值
                     * @return Fail 是否已赋值
                     * 
                     */
                    bool FailHasBeenSet() const;

                    /**
                     * 获取扫描失败（提示具体原因：扫描超时、客户端版本低、客户端离线）
                     * @return Stop 扫描失败（提示具体原因：扫描超时、客户端版本低、客户端离线）
                     * 
                     */
                    std::string GetStop() const;

                    /**
                     * 设置扫描失败（提示具体原因：扫描超时、客户端版本低、客户端离线）
                     * @param _stop 扫描失败（提示具体原因：扫描超时、客户端版本低、客户端离线）
                     * 
                     */
                    void SetStop(const std::string& _stop);

                    /**
                     * 判断参数 Stop 是否已赋值
                     * @return Stop 是否已赋值
                     * 
                     */
                    bool StopHasBeenSet() const;

                private:

                    /**
                     * 扫描中（包含初始化）
                     */
                    std::string m_scanning;
                    bool m_scanningHasBeenSet;

                    /**
                     * 扫描终止（包含终止中）
                     */
                    std::string m_ok;
                    bool m_okHasBeenSet;

                    /**
                     * 扫描失败
                     */
                    std::string m_fail;
                    bool m_failHasBeenSet;

                    /**
                     * 扫描失败（提示具体原因：扫描超时、客户端版本低、客户端离线）
                     */
                    std::string m_stop;
                    bool m_stopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_TASKSTATUS_H_
