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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_IOSRESULT_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_IOSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 渠道合作ios源码混淆加固结果
                */
                class IOSResult : public AbstractModel
                {
                public:
                    IOSResult();
                    ~IOSResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加固任务结果Id
                     * @return ResultId 加固任务结果Id
                     * 
                     */
                    std::string GetResultId() const;

                    /**
                     * 设置加固任务结果Id
                     * @param _resultId 加固任务结果Id
                     * 
                     */
                    void SetResultId(const std::string& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取用户uid
                     * @return OpUin 用户uid
                     * 
                     */
                    int64_t GetOpUin() const;

                    /**
                     * 设置用户uid
                     * @param _opUin 用户uid
                     * 
                     */
                    void SetOpUin(const int64_t& _opUin);

                    /**
                     * 判断参数 OpUin 是否已赋值
                     * @return OpUin 是否已赋值
                     * 
                     */
                    bool OpUinHasBeenSet() const;

                    /**
                     * 获取加固类型，这里为ios
                     * @return EncryptType 加固类型，这里为ios
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置加固类型，这里为ios
                     * @param _encryptType 加固类型，这里为ios
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取加固状态：0等待，1成功，2任务中，3失败，4重试中
                     * @return EncryptState 加固状态：0等待，1成功，2任务中，3失败，4重试中
                     * 
                     */
                    int64_t GetEncryptState() const;

                    /**
                     * 设置加固状态：0等待，1成功，2任务中，3失败，4重试中
                     * @param _encryptState 加固状态：0等待，1成功，2任务中，3失败，4重试中
                     * 
                     */
                    void SetEncryptState(const int64_t& _encryptState);

                    /**
                     * 判断参数 EncryptState 是否已赋值
                     * @return EncryptState 是否已赋值
                     * 
                     */
                    bool EncryptStateHasBeenSet() const;

                    /**
                     * 获取业务错误码
                     * @return EncryptErrno 业务错误码
                     * 
                     */
                    int64_t GetEncryptErrno() const;

                    /**
                     * 设置业务错误码
                     * @param _encryptErrno 业务错误码
                     * 
                     */
                    void SetEncryptErrno(const int64_t& _encryptErrno);

                    /**
                     * 判断参数 EncryptErrno 是否已赋值
                     * @return EncryptErrno 是否已赋值
                     * 
                     */
                    bool EncryptErrnoHasBeenSet() const;

                    /**
                     * 获取业务错误信息
                     * @return EncryptErrDesc 业务错误信息
                     * 
                     */
                    std::string GetEncryptErrDesc() const;

                    /**
                     * 设置业务错误信息
                     * @param _encryptErrDesc 业务错误信息
                     * 
                     */
                    void SetEncryptErrDesc(const std::string& _encryptErrDesc);

                    /**
                     * 判断参数 EncryptErrDesc 是否已赋值
                     * @return EncryptErrDesc 是否已赋值
                     * 
                     */
                    bool EncryptErrDescHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatTime 创建时间
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置创建时间
                     * @param _creatTime 创建时间
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取消耗时间
                     * @return CostTime 消耗时间
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置消耗时间
                     * @param _costTime 消耗时间
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取加固（混淆）包结果url
                     * @return EncryptPkgUrl 加固（混淆）包结果url
                     * 
                     */
                    std::string GetEncryptPkgUrl() const;

                    /**
                     * 设置加固（混淆）包结果url
                     * @param _encryptPkgUrl 加固（混淆）包结果url
                     * 
                     */
                    void SetEncryptPkgUrl(const std::string& _encryptPkgUrl);

                    /**
                     * 判断参数 EncryptPkgUrl 是否已赋值
                     * @return EncryptPkgUrl 是否已赋值
                     * 
                     */
                    bool EncryptPkgUrlHasBeenSet() const;

                private:

                    /**
                     * 加固任务结果Id
                     */
                    std::string m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * 用户uid
                     */
                    int64_t m_opUin;
                    bool m_opUinHasBeenSet;

                    /**
                     * 加固类型，这里为ios
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 加固状态：0等待，1成功，2任务中，3失败，4重试中
                     */
                    int64_t m_encryptState;
                    bool m_encryptStateHasBeenSet;

                    /**
                     * 业务错误码
                     */
                    int64_t m_encryptErrno;
                    bool m_encryptErrnoHasBeenSet;

                    /**
                     * 业务错误信息
                     */
                    std::string m_encryptErrDesc;
                    bool m_encryptErrDescHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 消耗时间
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 加固（混淆）包结果url
                     */
                    std::string m_encryptPkgUrl;
                    bool m_encryptPkgUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_IOSRESULT_H_
