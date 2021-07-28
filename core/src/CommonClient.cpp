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

#include <tencentcloud/core/CommonClient.h>

using namespace TencentCloud;
using std::string;

/*
CommonClient::CommonClient(const std::string &service, const std::string &version, const Credential &credential, const std::string &region, const std::string &endpoint) :
    AbstractClient(endpoint, version, credential, region, ClientProfile())
{
}*/
CommonClient::CommonClient(const std::string &service, const std::string &version, const Credential &credential, const std::string &region, const ClientProfile &profile) :
    AbstractClient(profile.GetHttpProfile().GetEndpoint(), version, credential, region, profile)
{
}

CommonClient::~CommonClient()
{
}